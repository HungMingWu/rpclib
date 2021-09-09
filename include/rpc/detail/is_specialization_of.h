#pragma once

#ifndef IS_SPECIALIZATION_OF_H_OPZTARVG
#define IS_SPECIALIZATION_OF_H_OPZTARVG

namespace rpc {
namespace detail {

template <template <typename...> class Templ, typename T>
struct is_specialization_of : std::false_type {};

template <template <typename...> class Templ, typename... T>
struct is_specialization_of<Templ, Templ<T...>> : std::true_type {};

}
} /* rpc  */

#endif /* end of include guard: IS_SPECIALIZATION_OF_H_OPZTARVG */
