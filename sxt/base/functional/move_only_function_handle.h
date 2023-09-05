/** Proofs GPU - Space and Time's cryptographic proof algorithms on the CPU and GPU.
 *
 * Copyright 2023-present Space and Time Labs, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

namespace sxt::basf {
//--------------------------------------------------------------------------------------------------
// move_only_function_handle
//--------------------------------------------------------------------------------------------------
template <class T, bool> class move_only_function_handle;

template <class R, class... Args, bool IsNoexcept>
class move_only_function_handle<R(Args...), IsNoexcept> {
public:
  virtual ~move_only_function_handle() noexcept = default;

  virtual R invoke(Args...) noexcept(IsNoexcept) = 0;
};
} // namespace sxt::basf
