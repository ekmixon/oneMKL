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

#pragma once

#include <complex>
#include <cstdint>

#include <CL/sycl.hpp>

#include "oneapi/mkl/types.hpp"
#include "oneapi/mkl/lapack/types.hpp"
#include "oneapi/mkl/detail/export.hpp"
#include "oneapi/mkl/detail/get_device_id.hpp"

namespace oneapi {
namespace mkl {
namespace lapack {
namespace detail {

ONEMKL_EXPORT void gebrd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<float> &d, sycl::buffer<float> &e,
                         sycl::buffer<std::complex<float>> &tauq,
                         sycl::buffer<std::complex<float>> &taup,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gebrd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &d, sycl::buffer<double> &e,
                         sycl::buffer<double> &tauq, sycl::buffer<double> &taup,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void gebrd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &d, sycl::buffer<float> &e, sycl::buffer<float> &tauq,
                         sycl::buffer<float> &taup, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gebrd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<double> &d, sycl::buffer<double> &e,
                         sycl::buffer<std::complex<double>> &tauq,
                         sycl::buffer<std::complex<double>> &taup,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gerqf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &tau, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gerqf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &tau, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gerqf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gerqf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void geqrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void geqrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &tau, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void geqrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &tau, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void geqrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getri(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                         sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getri(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                         sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getri(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                         sycl::buffer<float> &a, std::int64_t lda, sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void getri(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                         sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrs(oneapi::mkl::device libkey, sycl::queue &queue,
                         oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                         sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv, sycl::buffer<std::complex<float>> &b,
                         std::int64_t ldb, sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrs(oneapi::mkl::device libkey, sycl::queue &queue,
                         oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                         sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv, sycl::buffer<double> &b,
                         std::int64_t ldb, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrs(oneapi::mkl::device libkey, sycl::queue &queue,
                         oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                         sycl::buffer<float> &a, std::int64_t lda, sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<float> &b, std::int64_t ldb, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrs(oneapi::mkl::device libkey, sycl::queue &queue,
                         oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                         sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv, sycl::buffer<std::complex<double>> &b,
                         std::int64_t ldb, sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gesvd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::jobsvd jobu,
                         oneapi::mkl::jobsvd jobvt, std::int64_t m, std::int64_t n,
                         sycl::buffer<double> &a, std::int64_t lda, sycl::buffer<double> &s,
                         sycl::buffer<double> &u, std::int64_t ldu, sycl::buffer<double> &vt,
                         std::int64_t ldvt, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gesvd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::jobsvd jobu,
                         oneapi::mkl::jobsvd jobvt, std::int64_t m, std::int64_t n,
                         sycl::buffer<float> &a, std::int64_t lda, sycl::buffer<float> &s,
                         sycl::buffer<float> &u, std::int64_t ldu, sycl::buffer<float> &vt,
                         std::int64_t ldvt, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gesvd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::jobsvd jobu,
                         oneapi::mkl::jobsvd jobvt, std::int64_t m, std::int64_t n,
                         sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<float> &s, sycl::buffer<std::complex<float>> &u,
                         std::int64_t ldu, sycl::buffer<std::complex<float>> &vt, std::int64_t ldvt,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void gesvd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::jobsvd jobu,
                         oneapi::mkl::jobsvd jobvt, std::int64_t m, std::int64_t n,
                         sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<double> &s, sycl::buffer<std::complex<double>> &u,
                         std::int64_t ldu, sycl::buffer<std::complex<double>> &vt,
                         std::int64_t ldvt, sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void heevd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::job jobz,
                         oneapi::mkl::uplo uplo, std::int64_t n,
                         sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<float> &w, sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void heevd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::job jobz,
                         oneapi::mkl::uplo uplo, std::int64_t n,
                         sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<double> &w, sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void hegvd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype,
                         oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                         sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &b, std::int64_t ldb,
                         sycl::buffer<float> &w, sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void hegvd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype,
                         oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                         sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &b, std::int64_t ldb,
                         sycl::buffer<double> &w, sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void hetrd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<float> &d, sycl::buffer<float> &e,
                         sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void hetrd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<double> &d, sycl::buffer<double> &e,
                         sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void hetrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void hetrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void orgbr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::generate vec,
                         std::int64_t m, std::int64_t n, std::int64_t k, sycl::buffer<float> &a,
                         std::int64_t lda, sycl::buffer<float> &tau,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void orgbr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::generate vec,
                         std::int64_t m, std::int64_t n, std::int64_t k, sycl::buffer<double> &a,
                         std::int64_t lda, sycl::buffer<double> &tau,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void orgqr(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, std::int64_t k, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &tau, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void orgqr(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, std::int64_t k, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &tau, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void orgtr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &tau, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void orgtr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &tau, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void ormtr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans, std::int64_t m,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &tau, sycl::buffer<float> &c, std::int64_t ldc,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void ormtr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans, std::int64_t m,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &tau, sycl::buffer<double> &c, std::int64_t ldc,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void ormrq(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                         std::int64_t k, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &tau, sycl::buffer<float> &c, std::int64_t ldc,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void ormrq(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                         std::int64_t k, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &tau, sycl::buffer<double> &c, std::int64_t ldc,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void ormqr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                         std::int64_t k, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &tau, sycl::buffer<double> &c, std::int64_t ldc,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void ormqr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                         std::int64_t k, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &tau, sycl::buffer<float> &c, std::int64_t ldc,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void potri(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potri(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potri(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void potri(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrs(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, std::int64_t nrhs, sycl::buffer<float> &a,
                         std::int64_t lda, sycl::buffer<float> &b, std::int64_t ldb,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrs(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, std::int64_t nrhs, sycl::buffer<double> &a,
                         std::int64_t lda, sycl::buffer<double> &b, std::int64_t ldb,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrs(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, std::int64_t nrhs, sycl::buffer<std::complex<float>> &a,
                         std::int64_t lda, sycl::buffer<std::complex<float>> &b, std::int64_t ldb,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrs(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, std::int64_t nrhs, sycl::buffer<std::complex<double>> &a,
                         std::int64_t lda, sycl::buffer<std::complex<double>> &b, std::int64_t ldb,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void syevd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::job jobz,
                         oneapi::mkl::uplo uplo, std::int64_t n, sycl::buffer<double> &a,
                         std::int64_t lda, sycl::buffer<double> &w,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void syevd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::job jobz,
                         oneapi::mkl::uplo uplo, std::int64_t n, sycl::buffer<float> &a,
                         std::int64_t lda, sycl::buffer<float> &w, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void sygvd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype,
                         oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                         sycl::buffer<double> &a, std::int64_t lda, sycl::buffer<double> &b,
                         std::int64_t ldb, sycl::buffer<double> &w,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void sygvd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype,
                         oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                         sycl::buffer<float> &a, std::int64_t lda, sycl::buffer<float> &b,
                         std::int64_t ldb, sycl::buffer<float> &w, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void sytrd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &d, sycl::buffer<double> &e,
                         sycl::buffer<double> &tau, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void sytrd(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &d, sycl::buffer<float> &e, sycl::buffer<float> &tau,
                         sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void sytrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void sytrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv, sycl::buffer<double> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void sytrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void sytrf(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::int64_t> &ipiv,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void trtrs(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         oneapi::mkl::transpose trans, oneapi::mkl::diag diag, std::int64_t n,
                         std::int64_t nrhs, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &b, std::int64_t ldb,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void trtrs(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         oneapi::mkl::transpose trans, oneapi::mkl::diag diag, std::int64_t n,
                         std::int64_t nrhs, sycl::buffer<double> &a, std::int64_t lda,
                         sycl::buffer<double> &b, std::int64_t ldb,
                         sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void trtrs(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         oneapi::mkl::transpose trans, oneapi::mkl::diag diag, std::int64_t n,
                         std::int64_t nrhs, sycl::buffer<float> &a, std::int64_t lda,
                         sycl::buffer<float> &b, std::int64_t ldb, sycl::buffer<float> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void trtrs(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         oneapi::mkl::transpose trans, oneapi::mkl::diag diag, std::int64_t n,
                         std::int64_t nrhs, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &b, std::int64_t ldb,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void ungbr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::generate vec,
                         std::int64_t m, std::int64_t n, std::int64_t k,
                         sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void ungbr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::generate vec,
                         std::int64_t m, std::int64_t n, std::int64_t k,
                         sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void ungqr(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, std::int64_t k, sycl::buffer<std::complex<float>> &a,
                         std::int64_t lda, sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void ungqr(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                         std::int64_t n, std::int64_t k, sycl::buffer<std::complex<double>> &a,
                         std::int64_t lda, sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void ungtr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void ungtr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void unmrq(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                         std::int64_t k, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &c, std::int64_t ldc,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void unmrq(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                         std::int64_t k, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &c, std::int64_t ldc,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void unmqr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                         std::int64_t k, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &c, std::int64_t ldc,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void unmqr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                         std::int64_t k, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &c, std::int64_t ldc,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void unmtr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<float>> &tau,
                         sycl::buffer<std::complex<float>> &c, std::int64_t ldc,
                         sycl::buffer<std::complex<float>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void unmtr(oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
                         oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans, std::int64_t m,
                         std::int64_t n, sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                         sycl::buffer<std::complex<double>> &tau,
                         sycl::buffer<std::complex<double>> &c, std::int64_t ldc,
                         sycl::buffer<std::complex<double>> &scratchpad,
                         std::int64_t scratchpad_size);
ONEMKL_EXPORT void geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<float> &tau,
                               std::int64_t stride_tau, std::int64_t batch_size,
                               sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<double> &tau,
                               std::int64_t stride_tau, std::int64_t batch_size,
                               sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, sycl::buffer<std::complex<float>> &a,
                               std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::complex<float>> &tau, std::int64_t stride_tau,
                               std::int64_t batch_size,
                               sycl::buffer<std::complex<float>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, sycl::buffer<std::complex<double>> &a,
                               std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::complex<double>> &tau, std::int64_t stride_tau,
                               std::int64_t batch_size,
                               sycl::buffer<std::complex<double>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getri_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                               sycl::buffer<float> &a, std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::int64_t> &ipiv, std::int64_t stride_ipiv,
                               std::int64_t batch_size, sycl::buffer<float> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getri_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                               sycl::buffer<double> &a, std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::int64_t> &ipiv, std::int64_t stride_ipiv,
                               std::int64_t batch_size, sycl::buffer<double> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getri_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                               sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::int64_t> &ipiv,
                               std::int64_t stride_ipiv, std::int64_t batch_size,
                               sycl::buffer<std::complex<float>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getri_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                               sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::int64_t> &ipiv,
                               std::int64_t stride_ipiv, std::int64_t batch_size,
                               sycl::buffer<std::complex<double>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                               sycl::buffer<float> &a, std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::int64_t> &ipiv, std::int64_t stride_ipiv,
                               sycl::buffer<float> &b, std::int64_t ldb, std::int64_t stride_b,
                               std::int64_t batch_size, sycl::buffer<float> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                               sycl::buffer<double> &a, std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::int64_t> &ipiv, std::int64_t stride_ipiv,
                               sycl::buffer<double> &b, std::int64_t ldb, std::int64_t stride_b,
                               std::int64_t batch_size, sycl::buffer<double> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                               sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::int64_t> &ipiv,
                               std::int64_t stride_ipiv, sycl::buffer<std::complex<float>> &b,
                               std::int64_t ldb, std::int64_t stride_b, std::int64_t batch_size,
                               sycl::buffer<std::complex<float>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                               sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::int64_t> &ipiv,
                               std::int64_t stride_ipiv, sycl::buffer<std::complex<double>> &b,
                               std::int64_t ldb, std::int64_t stride_b, std::int64_t batch_size,
                               sycl::buffer<std::complex<double>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, sycl::buffer<float> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::int64_t> &ipiv,
                               std::int64_t stride_ipiv, std::int64_t batch_size,
                               sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, sycl::buffer<double> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::int64_t> &ipiv,
                               std::int64_t stride_ipiv, std::int64_t batch_size,
                               sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, sycl::buffer<std::complex<float>> &a,
                               std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::int64_t> &ipiv, std::int64_t stride_ipiv,
                               std::int64_t batch_size,
                               sycl::buffer<std::complex<float>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, sycl::buffer<std::complex<double>> &a,
                               std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::int64_t> &ipiv, std::int64_t stride_ipiv,
                               std::int64_t batch_size,
                               sycl::buffer<std::complex<double>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void orgqr_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, std::int64_t k, sycl::buffer<float> &a,
                               std::int64_t lda, std::int64_t stride_a, sycl::buffer<float> &tau,
                               std::int64_t stride_tau, std::int64_t batch_size,
                               sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void orgqr_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, std::int64_t k, sycl::buffer<double> &a,
                               std::int64_t lda, std::int64_t stride_a, sycl::buffer<double> &tau,
                               std::int64_t stride_tau, std::int64_t batch_size,
                               sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::uplo uplo, std::int64_t n, sycl::buffer<float> &a,
                               std::int64_t lda, std::int64_t stride_a, std::int64_t batch_size,
                               sycl::buffer<float> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::uplo uplo, std::int64_t n, sycl::buffer<double> &a,
                               std::int64_t lda, std::int64_t stride_a, std::int64_t batch_size,
                               sycl::buffer<double> &scratchpad, std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::uplo uplo, std::int64_t n,
                               sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                               std::int64_t stride_a, std::int64_t batch_size,
                               sycl::buffer<std::complex<float>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::uplo uplo, std::int64_t n,
                               sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                               std::int64_t stride_a, std::int64_t batch_size,
                               sycl::buffer<std::complex<double>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                               sycl::buffer<float> &a, std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<float> &b, std::int64_t ldb, std::int64_t stride_b,
                               std::int64_t batch_size, sycl::buffer<float> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                               sycl::buffer<double> &a, std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<double> &b, std::int64_t ldb, std::int64_t stride_b,
                               std::int64_t batch_size, sycl::buffer<double> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                               sycl::buffer<std::complex<float>> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::complex<float>> &b,
                               std::int64_t ldb, std::int64_t stride_b, std::int64_t batch_size,
                               sycl::buffer<std::complex<float>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                               oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                               sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::complex<double>> &b,
                               std::int64_t ldb, std::int64_t stride_b, std::int64_t batch_size,
                               sycl::buffer<std::complex<double>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void ungqr_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, std::int64_t k, sycl::buffer<std::complex<float>> &a,
                               std::int64_t lda, std::int64_t stride_a,
                               sycl::buffer<std::complex<float>> &tau, std::int64_t stride_tau,
                               std::int64_t batch_size,
                               sycl::buffer<std::complex<float>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT void ungqr_batch(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                               std::int64_t n, std::int64_t k,
                               sycl::buffer<std::complex<double>> &a, std::int64_t lda,
                               std::int64_t stride_a, sycl::buffer<std::complex<double>> &tau,
                               std::int64_t stride_tau, std::int64_t batch_size,
                               sycl::buffer<std::complex<double>> &scratchpad,
                               std::int64_t scratchpad_size);
ONEMKL_EXPORT sycl::event gebrd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::complex<float> *a, std::int64_t lda, float *d,
                                float *e, std::complex<float> *tauq, std::complex<float> *taup,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gebrd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, double *a, std::int64_t lda, double *d, double *e,
                                double *tauq, double *taup, double *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gebrd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, float *a, std::int64_t lda, float *d, float *e,
                                float *tauq, float *taup, float *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gebrd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::complex<double> *a, std::int64_t lda,
                                double *d, double *e, std::complex<double> *tauq,
                                std::complex<double> *taup, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gerqf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, float *a, std::int64_t lda, float *tau,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gerqf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, double *a, std::int64_t lda, double *tau,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gerqf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::complex<float> *a, std::int64_t lda,
                                std::complex<float> *tau, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gerqf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::complex<double> *a, std::int64_t lda,
                                std::complex<double> *tau, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::complex<float> *a, std::int64_t lda,
                                std::complex<float> *tau, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, double *a, std::int64_t lda, double *tau,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, float *a, std::int64_t lda, float *tau,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::complex<double> *a, std::int64_t lda,
                                std::complex<double> *tau, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::complex<float> *a, std::int64_t lda,
                                std::int64_t *ipiv, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, double *a, std::int64_t lda, std::int64_t *ipiv,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, float *a, std::int64_t lda, std::int64_t *ipiv,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::complex<double> *a, std::int64_t lda,
                                std::int64_t *ipiv, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                                std::complex<float> *a, std::int64_t lda, std::int64_t *ipiv,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                                double *a, std::int64_t lda, std::int64_t *ipiv, double *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                                float *a, std::int64_t lda, std::int64_t *ipiv, float *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                                std::complex<double> *a, std::int64_t lda, std::int64_t *ipiv,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                                std::complex<float> *a, std::int64_t lda, std::int64_t *ipiv,
                                std::complex<float> *b, std::int64_t ldb,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                                double *a, std::int64_t lda, std::int64_t *ipiv, double *b,
                                std::int64_t ldb, double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                                float *a, std::int64_t lda, std::int64_t *ipiv, float *b,
                                std::int64_t ldb, float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                                std::complex<double> *a, std::int64_t lda, std::int64_t *ipiv,
                                std::complex<double> *b, std::int64_t ldb,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gesvd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::jobsvd jobu, oneapi::mkl::jobsvd jobvt, std::int64_t m,
                                std::int64_t n, double *a, std::int64_t lda, double *s, double *u,
                                std::int64_t ldu, double *vt, std::int64_t ldvt, double *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gesvd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::jobsvd jobu, oneapi::mkl::jobsvd jobvt, std::int64_t m,
                                std::int64_t n, float *a, std::int64_t lda, float *s, float *u,
                                std::int64_t ldu, float *vt, std::int64_t ldvt, float *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gesvd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::jobsvd jobu, oneapi::mkl::jobsvd jobvt, std::int64_t m,
                                std::int64_t n, std::complex<float> *a, std::int64_t lda, float *s,
                                std::complex<float> *u, std::int64_t ldu, std::complex<float> *vt,
                                std::int64_t ldvt, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event gesvd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::jobsvd jobu, oneapi::mkl::jobsvd jobvt, std::int64_t m,
                                std::int64_t n, std::complex<double> *a, std::int64_t lda,
                                double *s, std::complex<double> *u, std::int64_t ldu,
                                std::complex<double> *vt, std::int64_t ldvt,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event heevd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                std::complex<float> *a, std::int64_t lda, float *w,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event heevd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                std::complex<double> *a, std::int64_t lda, double *w,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event hegvd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype,
                                oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                std::complex<float> *a, std::int64_t lda, std::complex<float> *b,
                                std::int64_t ldb, float *w, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event hegvd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype,
                                oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                std::complex<double> *a, std::int64_t lda, std::complex<double> *b,
                                std::int64_t ldb, double *w, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event hetrd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<float> *a,
                                std::int64_t lda, float *d, float *e, std::complex<float> *tau,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event hetrd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<double> *a,
                                std::int64_t lda, double *d, double *e, std::complex<double> *tau,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event hetrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<float> *a,
                                std::int64_t lda, std::int64_t *ipiv,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event hetrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<double> *a,
                                std::int64_t lda, std::int64_t *ipiv,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgbr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::generate vec, std::int64_t m, std::int64_t n,
                                std::int64_t k, float *a, std::int64_t lda, float *tau,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgbr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::generate vec, std::int64_t m, std::int64_t n,
                                std::int64_t k, double *a, std::int64_t lda, double *tau,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgqr(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::int64_t k, double *a, std::int64_t lda,
                                double *tau, double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgqr(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::int64_t k, float *a, std::int64_t lda,
                                float *tau, float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgtr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, float *a, std::int64_t lda,
                                float *tau, float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgtr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, double *a, std::int64_t lda,
                                double *tau, double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ormtr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::uplo uplo,
                                oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                                float *a, std::int64_t lda, float *tau, float *c, std::int64_t ldc,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ormtr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::uplo uplo,
                                oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                                double *a, std::int64_t lda, double *tau, double *c,
                                std::int64_t ldc, double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ormrq(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                std::int64_t m, std::int64_t n, std::int64_t k, float *a,
                                std::int64_t lda, float *tau, float *c, std::int64_t ldc,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ormrq(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                std::int64_t m, std::int64_t n, std::int64_t k, double *a,
                                std::int64_t lda, double *tau, double *c, std::int64_t ldc,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ormqr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                std::int64_t m, std::int64_t n, std::int64_t k, double *a,
                                std::int64_t lda, double *tau, double *c, std::int64_t ldc,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ormqr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                std::int64_t m, std::int64_t n, std::int64_t k, float *a,
                                std::int64_t lda, float *tau, float *c, std::int64_t ldc,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, float *a, std::int64_t lda,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, double *a, std::int64_t lda,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<float> *a,
                                std::int64_t lda, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<double> *a,
                                std::int64_t lda, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potri(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, float *a, std::int64_t lda,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potri(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, double *a, std::int64_t lda,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potri(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<float> *a,
                                std::int64_t lda, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potri(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<double> *a,
                                std::int64_t lda, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs, float *a,
                                std::int64_t lda, float *b, std::int64_t ldb, float *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                double *a, std::int64_t lda, double *b, std::int64_t ldb,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                std::complex<float> *a, std::int64_t lda, std::complex<float> *b,
                                std::int64_t ldb, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                std::complex<double> *a, std::int64_t lda, std::complex<double> *b,
                                std::int64_t ldb, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event syevd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                double *a, std::int64_t lda, double *w, double *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event syevd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                float *a, std::int64_t lda, float *w, float *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event sygvd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype,
                                oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                double *a, std::int64_t lda, double *b, std::int64_t ldb, double *w,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event sygvd(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype,
                                oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                float *a, std::int64_t lda, float *b, std::int64_t ldb, float *w,
                                float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event sytrd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, double *a, std::int64_t lda,
                                double *d, double *e, double *tau, double *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event sytrd(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, float *a, std::int64_t lda,
                                float *d, float *e, float *tau, float *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event sytrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, float *a, std::int64_t lda,
                                std::int64_t *ipiv, float *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event sytrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, double *a, std::int64_t lda,
                                std::int64_t *ipiv, double *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event sytrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<float> *a,
                                std::int64_t lda, std::int64_t *ipiv,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event sytrf(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<double> *a,
                                std::int64_t lda, std::int64_t *ipiv,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event trtrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans,
                                oneapi::mkl::diag diag, std::int64_t n, std::int64_t nrhs,
                                std::complex<float> *a, std::int64_t lda, std::complex<float> *b,
                                std::int64_t ldb, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event trtrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans,
                                oneapi::mkl::diag diag, std::int64_t n, std::int64_t nrhs,
                                double *a, std::int64_t lda, double *b, std::int64_t ldb,
                                double *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event trtrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans,
                                oneapi::mkl::diag diag, std::int64_t n, std::int64_t nrhs, float *a,
                                std::int64_t lda, float *b, std::int64_t ldb, float *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event trtrs(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans,
                                oneapi::mkl::diag diag, std::int64_t n, std::int64_t nrhs,
                                std::complex<double> *a, std::int64_t lda, std::complex<double> *b,
                                std::int64_t ldb, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungbr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::generate vec, std::int64_t m, std::int64_t n,
                                std::int64_t k, std::complex<float> *a, std::int64_t lda,
                                std::complex<float> *tau, std::complex<float> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungbr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::generate vec, std::int64_t m, std::int64_t n,
                                std::int64_t k, std::complex<double> *a, std::int64_t lda,
                                std::complex<double> *tau, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungqr(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::int64_t k, std::complex<float> *a,
                                std::int64_t lda, std::complex<float> *tau,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungqr(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                std::int64_t n, std::int64_t k, std::complex<double> *a,
                                std::int64_t lda, std::complex<double> *tau,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungtr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<float> *a,
                                std::int64_t lda, std::complex<float> *tau,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungtr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::uplo uplo, std::int64_t n, std::complex<double> *a,
                                std::int64_t lda, std::complex<double> *tau,
                                std::complex<double> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event unmrq(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                std::int64_t m, std::int64_t n, std::int64_t k,
                                std::complex<float> *a, std::int64_t lda, std::complex<float> *tau,
                                std::complex<float> *c, std::int64_t ldc,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event unmrq(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                std::int64_t m, std::int64_t n, std::int64_t k,
                                std::complex<double> *a, std::int64_t lda,
                                std::complex<double> *tau, std::complex<double> *c,
                                std::int64_t ldc, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event unmqr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                std::int64_t m, std::int64_t n, std::int64_t k,
                                std::complex<float> *a, std::int64_t lda, std::complex<float> *tau,
                                std::complex<float> *c, std::int64_t ldc,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event unmqr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                std::int64_t m, std::int64_t n, std::int64_t k,
                                std::complex<double> *a, std::int64_t lda,
                                std::complex<double> *tau, std::complex<double> *c,
                                std::int64_t ldc, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event unmtr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::uplo uplo,
                                oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                                std::complex<float> *a, std::int64_t lda, std::complex<float> *tau,
                                std::complex<float> *c, std::int64_t ldc,
                                std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event unmtr(oneapi::mkl::device libkey, sycl::queue &queue,
                                oneapi::mkl::side side, oneapi::mkl::uplo uplo,
                                oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                                std::complex<double> *a, std::int64_t lda,
                                std::complex<double> *tau, std::complex<double> *c,
                                std::int64_t ldc, std::complex<double> *scratchpad,
                                std::int64_t scratchpad_size,
                                const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, float *a, std::int64_t lda,
                                      std::int64_t stride_a, float *tau, std::int64_t stride_tau,
                                      std::int64_t batch_size, float *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, double *a, std::int64_t lda,
                                      std::int64_t stride_a, double *tau, std::int64_t stride_tau,
                                      std::int64_t batch_size, double *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, std::complex<float> *a,
                                      std::int64_t lda, std::int64_t stride_a,
                                      std::complex<float> *tau, std::int64_t stride_tau,
                                      std::int64_t batch_size, std::complex<float> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, std::complex<double> *a,
                                      std::int64_t lda, std::int64_t stride_a,
                                      std::complex<double> *tau, std::int64_t stride_tau,
                                      std::int64_t batch_size, std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, float **a,
                                      std::int64_t *lda, float **tau, std::int64_t group_count,
                                      std::int64_t *group_sizes, float *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, double **a,
                                      std::int64_t *lda, double **tau, std::int64_t group_count,
                                      std::int64_t *group_sizes, double *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, std::complex<float> **a,
                                      std::int64_t *lda, std::complex<float> **tau,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event geqrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, std::complex<double> **a,
                                      std::int64_t *lda, std::complex<double> **tau,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, float *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, std::int64_t batch_size,
                                      float *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, double *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, std::int64_t batch_size,
                                      double *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, std::complex<float> *a,
                                      std::int64_t lda, std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, std::int64_t batch_size,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, std::complex<double> *a,
                                      std::int64_t lda, std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, std::int64_t batch_size,
                                      std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, float **a,
                                      std::int64_t *lda, std::int64_t **ipiv,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      float *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, double **a,
                                      std::int64_t *lda, std::int64_t **ipiv,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      double *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, std::complex<float> **a,
                                      std::int64_t *lda, std::int64_t **ipiv,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, std::complex<double> **a,
                                      std::int64_t *lda, std::int64_t **ipiv,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t n, float *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, std::int64_t batch_size,
                                      float *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t n, double *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, std::int64_t batch_size,
                                      double *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t n, std::complex<float> *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, std::int64_t batch_size,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t n, std::complex<double> *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, std::int64_t batch_size,
                                      std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *n, float **a, std::int64_t *lda,
                                      std::int64_t **ipiv, std::int64_t group_count,
                                      std::int64_t *group_sizes, float *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *n, double **a, std::int64_t *lda,
                                      std::int64_t **ipiv, std::int64_t group_count,
                                      std::int64_t *group_sizes, double *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *n, std::complex<float> **a, std::int64_t *lda,
                                      std::int64_t **ipiv, std::int64_t group_count,
                                      std::int64_t *group_sizes, std::complex<float> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getri_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *n, std::complex<double> **a, std::int64_t *lda,
                                      std::int64_t **ipiv, std::int64_t group_count,
                                      std::int64_t *group_sizes, std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::transpose trans, std::int64_t n,
                                      std::int64_t nrhs, float *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, float *b, std::int64_t ldb,
                                      std::int64_t stride_b, std::int64_t batch_size,
                                      float *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::transpose trans, std::int64_t n,
                                      std::int64_t nrhs, double *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t *ipiv,
                                      std::int64_t stride_ipiv, double *b, std::int64_t ldb,
                                      std::int64_t stride_b, std::int64_t batch_size,
                                      double *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs_batch(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose trans, std::int64_t n,
    std::int64_t nrhs, std::complex<float> *a, std::int64_t lda, std::int64_t stride_a,
    std::int64_t *ipiv, std::int64_t stride_ipiv, std::complex<float> *b, std::int64_t ldb,
    std::int64_t stride_b, std::int64_t batch_size, std::complex<float> *scratchpad,
    std::int64_t scratchpad_size, const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs_batch(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose trans, std::int64_t n,
    std::int64_t nrhs, std::complex<double> *a, std::int64_t lda, std::int64_t stride_a,
    std::int64_t *ipiv, std::int64_t stride_ipiv, std::complex<double> *b, std::int64_t ldb,
    std::int64_t stride_b, std::int64_t batch_size, std::complex<double> *scratchpad,
    std::int64_t scratchpad_size, const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::transpose *trans, std::int64_t *n,
                                      std::int64_t *nrhs, float **a, std::int64_t *lda,
                                      std::int64_t **ipiv, float **b, std::int64_t *ldb,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      float *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::transpose *trans, std::int64_t *n,
                                      std::int64_t *nrhs, double **a, std::int64_t *lda,
                                      std::int64_t **ipiv, double **b, std::int64_t *ldb,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      double *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::transpose *trans, std::int64_t *n,
                                      std::int64_t *nrhs, std::complex<float> **a,
                                      std::int64_t *lda, std::int64_t **ipiv,
                                      std::complex<float> **b, std::int64_t *ldb,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event getrs_batch(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose *trans, std::int64_t *n,
    std::int64_t *nrhs, std::complex<double> **a, std::int64_t *lda, std::int64_t **ipiv,
    std::complex<double> **b, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes, std::complex<double> *scratchpad, std::int64_t scratchpad_size,
    const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgqr_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, std::int64_t k, float *a,
                                      std::int64_t lda, std::int64_t stride_a, float *tau,
                                      std::int64_t stride_tau, std::int64_t batch_size,
                                      float *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgqr_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, std::int64_t k, double *a,
                                      std::int64_t lda, std::int64_t stride_a, double *tau,
                                      std::int64_t stride_tau, std::int64_t batch_size,
                                      double *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgqr_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, std::int64_t *k, float **a,
                                      std::int64_t *lda, float **tau, std::int64_t group_count,
                                      std::int64_t *group_sizes, float *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event orgqr_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, std::int64_t *k, double **a,
                                      std::int64_t *lda, double **tau, std::int64_t group_count,
                                      std::int64_t *group_sizes, double *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo uplo, std::int64_t n, float *a,
                                      std::int64_t lda, std::int64_t stride_a,
                                      std::int64_t batch_size, float *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo uplo, std::int64_t n, double *a,
                                      std::int64_t lda, std::int64_t stride_a,
                                      std::int64_t batch_size, double *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo uplo, std::int64_t n,
                                      std::complex<float> *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t batch_size,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo uplo, std::int64_t n,
                                      std::complex<double> *a, std::int64_t lda,
                                      std::int64_t stride_a, std::int64_t batch_size,
                                      std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo *uplo, std::int64_t *n, float **a,
                                      std::int64_t *lda, std::int64_t group_count,
                                      std::int64_t *group_sizes, float *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo *uplo, std::int64_t *n, double **a,
                                      std::int64_t *lda, std::int64_t group_count,
                                      std::int64_t *group_sizes, double *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo *uplo, std::int64_t *n,
                                      std::complex<float> **a, std::int64_t *lda,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrf_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo *uplo, std::int64_t *n,
                                      std::complex<double> **a, std::int64_t *lda,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                      float *a, std::int64_t lda, std::int64_t stride_a, float *b,
                                      std::int64_t ldb, std::int64_t stride_b,
                                      std::int64_t batch_size, float *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                      double *a, std::int64_t lda, std::int64_t stride_a, double *b,
                                      std::int64_t ldb, std::int64_t stride_b,
                                      std::int64_t batch_size, double *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                      std::complex<float> *a, std::int64_t lda,
                                      std::int64_t stride_a, std::complex<float> *b,
                                      std::int64_t ldb, std::int64_t stride_b,
                                      std::int64_t batch_size, std::complex<float> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                      std::complex<double> *a, std::int64_t lda,
                                      std::int64_t stride_a, std::complex<double> *b,
                                      std::int64_t ldb, std::int64_t stride_b,
                                      std::int64_t batch_size, std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo *uplo, std::int64_t *n, std::int64_t *nrhs,
                                      float **a, std::int64_t *lda, float **b, std::int64_t *ldb,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      float *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo *uplo, std::int64_t *n, std::int64_t *nrhs,
                                      double **a, std::int64_t *lda, double **b, std::int64_t *ldb,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      double *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo *uplo, std::int64_t *n, std::int64_t *nrhs,
                                      std::complex<float> **a, std::int64_t *lda,
                                      std::complex<float> **b, std::int64_t *ldb,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event potrs_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      oneapi::mkl::uplo *uplo, std::int64_t *n, std::int64_t *nrhs,
                                      std::complex<double> **a, std::int64_t *lda,
                                      std::complex<double> **b, std::int64_t *ldb,
                                      std::int64_t group_count, std::int64_t *group_sizes,
                                      std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungqr_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t m, std::int64_t n, std::int64_t k,
                                      std::complex<float> *a, std::int64_t lda,
                                      std::int64_t stride_a, std::complex<float> *tau,
                                      std::int64_t stride_tau, std::int64_t batch_size,
                                      std::complex<float> *scratchpad, std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungqr_batch(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n, std::int64_t k,
    std::complex<double> *a, std::int64_t lda, std::int64_t stride_a, std::complex<double> *tau,
    std::int64_t stride_tau, std::int64_t batch_size, std::complex<double> *scratchpad,
    std::int64_t scratchpad_size, const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungqr_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, std::int64_t *k,
                                      std::complex<float> **a, std::int64_t *lda,
                                      std::complex<float> **tau, std::int64_t group_count,
                                      std::int64_t *group_sizes, std::complex<float> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});
ONEMKL_EXPORT sycl::event ungqr_batch(oneapi::mkl::device libkey, sycl::queue &queue,
                                      std::int64_t *m, std::int64_t *n, std::int64_t *k,
                                      std::complex<double> **a, std::int64_t *lda,
                                      std::complex<double> **tau, std::int64_t group_count,
                                      std::int64_t *group_sizes, std::complex<double> *scratchpad,
                                      std::int64_t scratchpad_size,
                                      const std::vector<sycl::event> &dependencies = {});

template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t gebrd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                   std::int64_t n, std::int64_t lda);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t gerqf_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                   std::int64_t n, std::int64_t lda);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t geqrf_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                   std::int64_t n, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t gesvd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::jobsvd jobu, oneapi::mkl::jobsvd jobvt,
                                   std::int64_t m, std::int64_t n, std::int64_t lda,
                                   std::int64_t ldu, std::int64_t ldvt);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t gesvd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::jobsvd jobu, oneapi::mkl::jobsvd jobvt,
                                   std::int64_t m, std::int64_t n, std::int64_t lda,
                                   std::int64_t ldu, std::int64_t ldvt);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getrf_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                   std::int64_t n, std::int64_t lda);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getri_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n,
                                   std::int64_t lda);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getrs_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::transpose trans, std::int64_t n, std::int64_t nrhs,
                                   std::int64_t lda, std::int64_t ldb);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t heevd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                   std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t hegvd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   std::int64_t itype, oneapi::mkl::job jobz,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda,
                                   std::int64_t ldb);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t hetrd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t hetrf_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t orgbr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::generate vect, std::int64_t m, std::int64_t n,
                                   std::int64_t k, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t orgtr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t orgqr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                   std::int64_t n, std::int64_t k, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t ormrq_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                   std::int64_t m, std::int64_t n, std::int64_t k, std::int64_t lda,
                                   std::int64_t ldc);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t ormqr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                   std::int64_t m, std::int64_t n, std::int64_t k, std::int64_t lda,
                                   std::int64_t ldc);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t ormtr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::side side, oneapi::mkl::uplo uplo,
                                   oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                                   std::int64_t lda, std::int64_t ldc);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t potrf_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t potrs_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                   std::int64_t lda, std::int64_t ldb);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t potri_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t sytrf_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t syevd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::job jobz, oneapi::mkl::uplo uplo, std::int64_t n,
                                   std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t sygvd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   std::int64_t itype, oneapi::mkl::job jobz,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda,
                                   std::int64_t ldb);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t sytrd_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t trtrs_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, oneapi::mkl::transpose trans,
                                   oneapi::mkl::diag diag, std::int64_t n, std::int64_t nrhs,
                                   std::int64_t lda, std::int64_t ldb);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t ungbr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::generate vect, std::int64_t m, std::int64_t n,
                                   std::int64_t k, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t ungqr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m,
                                   std::int64_t n, std::int64_t k, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t ungtr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t unmrq_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                   std::int64_t m, std::int64_t n, std::int64_t k, std::int64_t lda,
                                   std::int64_t ldc);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t unmqr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::side side, oneapi::mkl::transpose trans,
                                   std::int64_t m, std::int64_t n, std::int64_t k, std::int64_t lda,
                                   std::int64_t ldc);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t unmtr_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                   oneapi::mkl::side side, oneapi::mkl::uplo uplo,
                                   oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n,
                                   std::int64_t lda, std::int64_t ldc);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getrf_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t m, std::int64_t n, std::int64_t lda,
                                         std::int64_t stride_a, std::int64_t stride_ipiv,
                                         std::int64_t batch_size);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getri_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t n, std::int64_t lda, std::int64_t stride_a,
                                         std::int64_t stride_ipiv, std::int64_t batch_size);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getrs_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         oneapi::mkl::transpose trans, std::int64_t n,
                                         std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a,
                                         std::int64_t stride_ipiv, std::int64_t ldb,
                                         std::int64_t stride_b, std::int64_t batch_size);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t geqrf_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t m, std::int64_t n, std::int64_t lda,
                                         std::int64_t stride_a, std::int64_t stride_tau,
                                         std::int64_t batch_size);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t potrf_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda,
                                         std::int64_t stride_a, std::int64_t batch_size);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t potrs_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t nrhs,
                                         std::int64_t lda, std::int64_t stride_a, std::int64_t ldb,
                                         std::int64_t stride_b, std::int64_t batch_size);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t orgqr_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t m, std::int64_t n, std::int64_t k,
                                         std::int64_t lda, std::int64_t stride_a,
                                         std::int64_t stride_tau, std::int64_t batch_size);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t ungqr_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t m, std::int64_t n, std::int64_t k,
                                         std::int64_t lda, std::int64_t stride_a,
                                         std::int64_t stride_tau, std::int64_t batch_size);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getrf_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t *m, std::int64_t *n, std::int64_t *lda,
                                         std::int64_t group_count, std::int64_t *group_sizes);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getri_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t *n, std::int64_t *lda,
                                         std::int64_t group_count, std::int64_t *group_sizes);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t getrs_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         oneapi::mkl::transpose *trans, std::int64_t *n,
                                         std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb,
                                         std::int64_t group_count, std::int64_t *group_sizes);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t geqrf_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t *m, std::int64_t *n, std::int64_t *lda,
                                         std::int64_t group_count, std::int64_t *group_sizes);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_real_floating_point<fp_type> = nullptr>
std::int64_t orgqr_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t *m, std::int64_t *n, std::int64_t *k,
                                         std::int64_t *lda, std::int64_t group_count,
                                         std::int64_t *group_sizes);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t potrf_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         oneapi::mkl::uplo *uplo, std::int64_t *n,
                                         std::int64_t *lda, std::int64_t group_count,
                                         std::int64_t *group_sizes);
template <typename fp_type, oneapi::mkl::lapack::internal::is_floating_point<fp_type> = nullptr>
std::int64_t potrs_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         oneapi::mkl::uplo *uplo, std::int64_t *n,
                                         std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb,
                                         std::int64_t group_count, std::int64_t *group_sizes);
template <typename fp_type,
          oneapi::mkl::lapack::internal::is_complex_floating_point<fp_type> = nullptr>
std::int64_t ungqr_batch_scratchpad_size(oneapi::mkl::device libkey, sycl::queue &queue,
                                         std::int64_t *m, std::int64_t *n, std::int64_t *k,
                                         std::int64_t *lda, std::int64_t group_count,
                                         std::int64_t *group_sizes);

template <>
ONEMKL_EXPORT std::int64_t gebrd_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, std::int64_t m,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t gebrd_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, std::int64_t m,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t gebrd_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      std::int64_t m,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t gebrd_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       std::int64_t m,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t gerqf_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, std::int64_t m,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t gerqf_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, std::int64_t m,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t gerqf_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      std::int64_t m,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t gerqf_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       std::int64_t m,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t geqrf_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, std::int64_t m,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t geqrf_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, std::int64_t m,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t geqrf_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      std::int64_t m,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t geqrf_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       std::int64_t m,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t gesvd_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue,
                                                        oneapi::mkl::jobsvd jobu,
                                                        oneapi::mkl::jobsvd jobvt, std::int64_t m,
                                                        std::int64_t n, std::int64_t lda,
                                                        std::int64_t ldu, std::int64_t ldvt);
template <>
ONEMKL_EXPORT std::int64_t gesvd_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue,
                                                         oneapi::mkl::jobsvd jobu,
                                                         oneapi::mkl::jobsvd jobvt, std::int64_t m,
                                                         std::int64_t n, std::int64_t lda,
                                                         std::int64_t ldu, std::int64_t ldvt);
template <>
ONEMKL_EXPORT std::int64_t gesvd_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::jobsvd jobu,
    oneapi::mkl::jobsvd jobvt, std::int64_t m, std::int64_t n, std::int64_t lda, std::int64_t ldu,
    std::int64_t ldvt);
template <>
ONEMKL_EXPORT std::int64_t gesvd_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::jobsvd jobu,
    oneapi::mkl::jobsvd jobvt, std::int64_t m, std::int64_t n, std::int64_t lda, std::int64_t ldu,
    std::int64_t ldvt);
template <>
ONEMKL_EXPORT std::int64_t getrf_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, std::int64_t m,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t getrf_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, std::int64_t m,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t getrf_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      std::int64_t m,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t getrf_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       std::int64_t m,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t getri_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, std::int64_t n,
                                                        std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t getri_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, std::int64_t n,
                                                         std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t getri_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t getri_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t getrs_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue,
                                                        oneapi::mkl::transpose trans,
                                                        std::int64_t n, std::int64_t nrhs,
                                                        std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t getrs_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue,
                                                         oneapi::mkl::transpose trans,
                                                         std::int64_t n, std::int64_t nrhs,
                                                         std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t getrs_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose trans, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t getrs_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose trans, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t heevd_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::job jobz, oneapi::mkl::uplo uplo,
    std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t heevd_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::job jobz, oneapi::mkl::uplo uplo,
    std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t hegvd_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype, oneapi::mkl::job jobz,
    oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t hegvd_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t itype, oneapi::mkl::job jobz,
    oneapi::mkl::uplo uplo, std::int64_t n, std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t hetrd_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      oneapi::mkl::uplo uplo,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t hetrd_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       oneapi::mkl::uplo uplo,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t hetrf_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      oneapi::mkl::uplo uplo,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t hetrf_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       oneapi::mkl::uplo uplo,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t orgbr_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue,
                                                        oneapi::mkl::generate vect, std::int64_t m,
                                                        std::int64_t n, std::int64_t k,
                                                        std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t orgbr_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue,
                                                         oneapi::mkl::generate vect, std::int64_t m,
                                                         std::int64_t n, std::int64_t k,
                                                         std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t orgtr_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t orgtr_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t orgqr_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, std::int64_t m,
                                                        std::int64_t n, std::int64_t k,
                                                        std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t orgqr_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, std::int64_t m,
                                                         std::int64_t n, std::int64_t k,
                                                         std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t ormrq_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::side side,
                                                        oneapi::mkl::transpose trans,
                                                        std::int64_t m, std::int64_t n,
                                                        std::int64_t k, std::int64_t lda,
                                                        std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t ormrq_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::side side,
                                                         oneapi::mkl::transpose trans,
                                                         std::int64_t m, std::int64_t n,
                                                         std::int64_t k, std::int64_t lda,
                                                         std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t ormqr_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::side side,
                                                        oneapi::mkl::transpose trans,
                                                        std::int64_t m, std::int64_t n,
                                                        std::int64_t k, std::int64_t lda,
                                                        std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t ormqr_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::side side,
                                                         oneapi::mkl::transpose trans,
                                                         std::int64_t m, std::int64_t n,
                                                         std::int64_t k, std::int64_t lda,
                                                         std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t ormtr_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::side side,
                                                        oneapi::mkl::uplo uplo,
                                                        oneapi::mkl::transpose trans,
                                                        std::int64_t m, std::int64_t n,
                                                        std::int64_t lda, std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t ormtr_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::side side,
                                                         oneapi::mkl::uplo uplo,
                                                         oneapi::mkl::transpose trans,
                                                         std::int64_t m, std::int64_t n,
                                                         std::int64_t lda, std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t potrf_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t potrf_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t potrf_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      oneapi::mkl::uplo uplo,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t potrf_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       oneapi::mkl::uplo uplo,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t potrs_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                        std::int64_t n, std::int64_t nrhs,
                                                        std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t potrs_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                         std::int64_t n, std::int64_t nrhs,
                                                         std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t potrs_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t potrs_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t potri_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t potri_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t potri_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      oneapi::mkl::uplo uplo,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t potri_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       oneapi::mkl::uplo uplo,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t sytrf_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t sytrf_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t sytrf_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      oneapi::mkl::uplo uplo,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t sytrf_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       oneapi::mkl::uplo uplo,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t syevd_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::job jobz,
                                                        oneapi::mkl::uplo uplo, std::int64_t n,
                                                        std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t syevd_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::job jobz,
                                                         oneapi::mkl::uplo uplo, std::int64_t n,
                                                         std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t sygvd_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, std::int64_t itype,
                                                        oneapi::mkl::job jobz,
                                                        oneapi::mkl::uplo uplo, std::int64_t n,
                                                        std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t sygvd_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, std::int64_t itype,
                                                         oneapi::mkl::job jobz,
                                                         oneapi::mkl::uplo uplo, std::int64_t n,
                                                         std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t sytrd_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                        std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t sytrd_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                         std::int64_t n, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t trtrs_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                        sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                        oneapi::mkl::transpose trans,
                                                        oneapi::mkl::diag diag, std::int64_t n,
                                                        std::int64_t nrhs, std::int64_t lda,
                                                        std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t trtrs_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                         sycl::queue &queue, oneapi::mkl::uplo uplo,
                                                         oneapi::mkl::transpose trans,
                                                         oneapi::mkl::diag diag, std::int64_t n,
                                                         std::int64_t nrhs, std::int64_t lda,
                                                         std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t trtrs_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
    oneapi::mkl::transpose trans, oneapi::mkl::diag diag, std::int64_t n, std::int64_t nrhs,
    std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t trtrs_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo,
    oneapi::mkl::transpose trans, oneapi::mkl::diag diag, std::int64_t n, std::int64_t nrhs,
    std::int64_t lda, std::int64_t ldb);
template <>
ONEMKL_EXPORT std::int64_t ungbr_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::generate vect, std::int64_t m,
    std::int64_t n, std::int64_t k, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t ungbr_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::generate vect, std::int64_t m,
    std::int64_t n, std::int64_t k, std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t ungqr_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n, std::int64_t k,
    std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t ungqr_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n, std::int64_t k,
    std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t ungtr_scratchpad_size<std::complex<float>>(oneapi::mkl::device libkey,
                                                                      sycl::queue &queue,
                                                                      oneapi::mkl::uplo uplo,
                                                                      std::int64_t n,
                                                                      std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t ungtr_scratchpad_size<std::complex<double>>(oneapi::mkl::device libkey,
                                                                       sycl::queue &queue,
                                                                       oneapi::mkl::uplo uplo,
                                                                       std::int64_t n,
                                                                       std::int64_t lda);
template <>
ONEMKL_EXPORT std::int64_t unmrq_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
    oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n, std::int64_t k, std::int64_t lda,
    std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t unmrq_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
    oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n, std::int64_t k, std::int64_t lda,
    std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t unmqr_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
    oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n, std::int64_t k, std::int64_t lda,
    std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t unmqr_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side,
    oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n, std::int64_t k, std::int64_t lda,
    std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t unmtr_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side, oneapi::mkl::uplo uplo,
    oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n, std::int64_t lda,
    std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t unmtr_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::side side, oneapi::mkl::uplo uplo,
    oneapi::mkl::transpose trans, std::int64_t m, std::int64_t n, std::int64_t lda,
    std::int64_t ldc);
template <>
ONEMKL_EXPORT std::int64_t getrf_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_ipiv, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getrf_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_ipiv, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getrf_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_ipiv, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getrf_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_ipiv, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getri_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n, std::int64_t lda,
    std::int64_t stride_a, std::int64_t stride_ipiv, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getri_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n, std::int64_t lda,
    std::int64_t stride_a, std::int64_t stride_ipiv, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getri_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n, std::int64_t lda,
    std::int64_t stride_a, std::int64_t stride_ipiv, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getri_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t n, std::int64_t lda,
    std::int64_t stride_a, std::int64_t stride_ipiv, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getrs_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose trans, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a, std::int64_t stride_ipiv,
    std::int64_t ldb, std::int64_t stride_b, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getrs_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose trans, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a, std::int64_t stride_ipiv,
    std::int64_t ldb, std::int64_t stride_b, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getrs_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose trans, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a, std::int64_t stride_ipiv,
    std::int64_t ldb, std::int64_t stride_b, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getrs_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose trans, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a, std::int64_t stride_ipiv,
    std::int64_t ldb, std::int64_t stride_b, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t geqrf_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_tau, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t geqrf_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_tau, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t geqrf_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_tau, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t geqrf_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_tau, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t potrf_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t potrf_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t potrf_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t potrf_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t lda, std::int64_t stride_a, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t potrs_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a, std::int64_t ldb,
    std::int64_t stride_b, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t potrs_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a, std::int64_t ldb,
    std::int64_t stride_b, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t potrs_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a, std::int64_t ldb,
    std::int64_t stride_b, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t potrs_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo uplo, std::int64_t n,
    std::int64_t nrhs, std::int64_t lda, std::int64_t stride_a, std::int64_t ldb,
    std::int64_t stride_b, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t orgqr_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n, std::int64_t k,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_tau, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t orgqr_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n, std::int64_t k,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_tau, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t ungqr_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n, std::int64_t k,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_tau, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t ungqr_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t m, std::int64_t n, std::int64_t k,
    std::int64_t lda, std::int64_t stride_a, std::int64_t stride_tau, std::int64_t batch_size);
template <>
ONEMKL_EXPORT std::int64_t getrf_batch_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                              sycl::queue &queue, std::int64_t *m,
                                                              std::int64_t *n, std::int64_t *lda,
                                                              std::int64_t group_count,
                                                              std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getrf_batch_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                               sycl::queue &queue, std::int64_t *m,
                                                               std::int64_t *n, std::int64_t *lda,
                                                               std::int64_t group_count,
                                                               std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getrf_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *m, std::int64_t *n,
    std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getrf_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *m, std::int64_t *n,
    std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getri_batch_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                              sycl::queue &queue, std::int64_t *n,
                                                              std::int64_t *lda,
                                                              std::int64_t group_count,
                                                              std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getri_batch_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                               sycl::queue &queue, std::int64_t *n,
                                                               std::int64_t *lda,
                                                               std::int64_t group_count,
                                                               std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getri_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *n, std::int64_t *lda,
    std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getri_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *n, std::int64_t *lda,
    std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getrs_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose *trans, std::int64_t *n,
    std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getrs_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose *trans, std::int64_t *n,
    std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getrs_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose *trans, std::int64_t *n,
    std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t getrs_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::transpose *trans, std::int64_t *n,
    std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t geqrf_batch_scratchpad_size<float>(oneapi::mkl::device libkey,
                                                              sycl::queue &queue, std::int64_t *m,
                                                              std::int64_t *n, std::int64_t *lda,
                                                              std::int64_t group_count,
                                                              std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t geqrf_batch_scratchpad_size<double>(oneapi::mkl::device libkey,
                                                               sycl::queue &queue, std::int64_t *m,
                                                               std::int64_t *n, std::int64_t *lda,
                                                               std::int64_t group_count,
                                                               std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t geqrf_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *m, std::int64_t *n,
    std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t geqrf_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *m, std::int64_t *n,
    std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t orgqr_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *m, std::int64_t *n,
    std::int64_t *k, std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t orgqr_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *m, std::int64_t *n,
    std::int64_t *k, std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t potrf_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo *uplo, std::int64_t *n,
    std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t potrf_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo *uplo, std::int64_t *n,
    std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t potrf_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo *uplo, std::int64_t *n,
    std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t potrf_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo *uplo, std::int64_t *n,
    std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t potrs_batch_scratchpad_size<float>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo *uplo, std::int64_t *n,
    std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t potrs_batch_scratchpad_size<double>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo *uplo, std::int64_t *n,
    std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t potrs_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo *uplo, std::int64_t *n,
    std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t potrs_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, oneapi::mkl::uplo *uplo, std::int64_t *n,
    std::int64_t *nrhs, std::int64_t *lda, std::int64_t *ldb, std::int64_t group_count,
    std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t ungqr_batch_scratchpad_size<std::complex<float>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *m, std::int64_t *n,
    std::int64_t *k, std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
template <>
ONEMKL_EXPORT std::int64_t ungqr_batch_scratchpad_size<std::complex<double>>(
    oneapi::mkl::device libkey, sycl::queue &queue, std::int64_t *m, std::int64_t *n,
    std::int64_t *k, std::int64_t *lda, std::int64_t group_count, std::int64_t *group_sizes);
} //namespace detail
} //namespace lapack
} //namespace mkl
} //namespace oneapi
