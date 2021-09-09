#pragma once

#ifndef NOT_H_0MEGQWII
#define NOT_H_0MEGQWII

namespace rpc {
namespace detail {

template<typename B>
using not_ = std::bool_constant<!B::value>;

}
}

#endif /* end of include guard: NOT_H_0MEGQWII */
