/*******************************************************************************
* Copyright 2020-2021 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions
* and limitations under the License.
*
*
* SPDX-License-Identifier: Apache-2.0
*******************************************************************************/

#include <algorithm>
#include <complex>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <vector>

#include <CL/sycl.hpp>
#include "cblas.h"
#include "oneapi/mkl.hpp"
#include "oneapi/mkl/detail/config.hpp"
#include "onemkl_blas_helper.hpp"
#include "reference_blas_templates.hpp"
#include "test_common.hpp"
#include "test_helper.hpp"

#include <gtest/gtest.h>

using namespace cl::sycl;
using std::vector;

extern std::vector<cl::sycl::device *> devices;

namespace {

template <typename fp, typename fp_scalar>
int test(device *dev, oneapi::mkl::layout layout, oneapi::mkl::uplo upper_lower, int n,
         fp_scalar alpha, int incx) {
    // Prepare data.
    vector<fp> x, A_ref, A;
    rand_vector(x, n, incx);
    rand_matrix(A, layout, oneapi::mkl::transpose::nontrans, n, n, n);
    A_ref = A;

    // Call Reference HPR.
    const int n_ref = n, incx_ref = incx;
    using fp_ref = typename ref_type_info<fp>::type;
    using fp_scalar_mkl = typename ref_type_info<fp_scalar>::type;

    ::hpr(convert_to_cblas_layout(layout), convert_to_cblas_uplo(upper_lower), &n_ref,
          (fp_scalar_mkl *)&alpha, (fp_ref *)x.data(), &incx_ref, (fp_ref *)A_ref.data());

    // Call DPC++ HPR.

    // Catch asynchronous exceptions.
    auto exception_handler = [](exception_list exceptions) {
        for (std::exception_ptr const &e : exceptions) {
            try {
                std::rethrow_exception(e);
            }
            catch (exception const &e) {
                std::cout << "Caught asynchronous SYCL exception during HPR:\n"
                          << e.what() << std::endl;
                print_error_code(e);
            }
        }
    };

    queue main_queue(*dev, exception_handler);

    buffer<fp, 1> x_buffer = make_buffer(x);
    buffer<fp, 1> A_buffer = make_buffer(A);

    try {
#ifdef CALL_RT_API
        switch (layout) {
            case oneapi::mkl::layout::column_major:
                oneapi::mkl::blas::column_major::hpr(main_queue, upper_lower, n, alpha, x_buffer,
                                                     incx, A_buffer);
                break;
            case oneapi::mkl::layout::row_major:
                oneapi::mkl::blas::row_major::hpr(main_queue, upper_lower, n, alpha, x_buffer, incx,
                                                  A_buffer);
                break;
            default: break;
        }
#else
        switch (layout) {
            case oneapi::mkl::layout::column_major:
                TEST_RUN_CT_SELECT(main_queue, oneapi::mkl::blas::column_major::hpr, upper_lower, n,
                                   alpha, x_buffer, incx, A_buffer);
                break;
            case oneapi::mkl::layout::row_major:
                TEST_RUN_CT_SELECT(main_queue, oneapi::mkl::blas::row_major::hpr, upper_lower, n,
                                   alpha, x_buffer, incx, A_buffer);
                break;
            default: break;
        }
#endif
    }
    catch (exception const &e) {
        std::cout << "Caught synchronous SYCL exception during HPR:\n" << e.what() << std::endl;
        print_error_code(e);
    }

    catch (const oneapi::mkl::unimplemented &e) {
        return test_skipped;
    }

    catch (const std::runtime_error &error) {
        std::cout << "Error raised during execution of HPR:\n" << error.what() << std::endl;
    }

    // Compare the results of reference implementation and DPC++ implementation.
    auto A_accessor = A_buffer.template get_access<access::mode::read>();
    bool good = check_equal_matrix(A_accessor, A_ref, layout, n, n, n, n, std::cout);

    return (int)good;
}

class HprTests
        : public ::testing::TestWithParam<std::tuple<cl::sycl::device *, oneapi::mkl::layout>> {};

TEST_P(HprTests, ComplexSinglePrecision) {
    float alpha(2.0);
    EXPECT_TRUEORSKIP((test<std::complex<float>, float>(
        std::get<0>(GetParam()), std::get<1>(GetParam()), oneapi::mkl::uplo::lower, 30, alpha, 2)));
    EXPECT_TRUEORSKIP((test<std::complex<float>, float>(
        std::get<0>(GetParam()), std::get<1>(GetParam()), oneapi::mkl::uplo::upper, 30, alpha, 2)));
    EXPECT_TRUEORSKIP(
        (test<std::complex<float>, float>(std::get<0>(GetParam()), std::get<1>(GetParam()),
                                          oneapi::mkl::uplo::lower, 30, alpha, -2)));
    EXPECT_TRUEORSKIP(
        (test<std::complex<float>, float>(std::get<0>(GetParam()), std::get<1>(GetParam()),
                                          oneapi::mkl::uplo::upper, 30, alpha, -2)));
    EXPECT_TRUEORSKIP((test<std::complex<float>, float>(
        std::get<0>(GetParam()), std::get<1>(GetParam()), oneapi::mkl::uplo::lower, 30, alpha, 1)));
    EXPECT_TRUEORSKIP((test<std::complex<float>, float>(
        std::get<0>(GetParam()), std::get<1>(GetParam()), oneapi::mkl::uplo::upper, 30, alpha, 1)));
}

TEST_P(HprTests, ComplexDoublePrecision) {
    double alpha(2.0);
    EXPECT_TRUEORSKIP((test<std::complex<double>, double>(
        std::get<0>(GetParam()), std::get<1>(GetParam()), oneapi::mkl::uplo::lower, 30, alpha, 2)));
    EXPECT_TRUEORSKIP((test<std::complex<double>, double>(
        std::get<0>(GetParam()), std::get<1>(GetParam()), oneapi::mkl::uplo::upper, 30, alpha, 2)));
    EXPECT_TRUEORSKIP(
        (test<std::complex<double>, double>(std::get<0>(GetParam()), std::get<1>(GetParam()),
                                            oneapi::mkl::uplo::lower, 30, alpha, -2)));
    EXPECT_TRUEORSKIP(
        (test<std::complex<double>, double>(std::get<0>(GetParam()), std::get<1>(GetParam()),
                                            oneapi::mkl::uplo::upper, 30, alpha, -2)));
    EXPECT_TRUEORSKIP((test<std::complex<double>, double>(
        std::get<0>(GetParam()), std::get<1>(GetParam()), oneapi::mkl::uplo::lower, 30, alpha, 1)));
    EXPECT_TRUEORSKIP((test<std::complex<double>, double>(
        std::get<0>(GetParam()), std::get<1>(GetParam()), oneapi::mkl::uplo::upper, 30, alpha, 1)));
}

INSTANTIATE_TEST_SUITE_P(HprTestSuite, HprTests,
                         ::testing::Combine(testing::ValuesIn(devices),
                                            testing::Values(oneapi::mkl::layout::column_major,
                                                            oneapi::mkl::layout::row_major)),
                         ::LayoutDeviceNamePrint());

} // anonymous namespace
