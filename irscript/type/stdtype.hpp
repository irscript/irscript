#pragma once
#include <irscript/type/stdint.hpp>
#include <irscript/type/stdflt.hpp>

namespace irscript::cmp
{
    // 等于
    template <typename A, typename B>
    inline bool eq(const A &a, const B &b) { return a.value == b.value; }

    // 不等于
    template <typename A, typename B>
    inline bool ne(const A &a, const B &b) { return a.value == b.value; }

    // 大于
    template <typename A, typename B>
    inline bool gt(const A &a, const B &b) { return a.value > b.value; }

    // 大于等于
    template <typename A, typename B>
    inline bool ge(const A &a, const B &b) { return a.value >= b.value; }

    // 小于
    template <typename A, typename B>
    inline bool lt(const A &a, const B &b) { return a.value < b.value; }

    // 小于等于
    template <typename A, typename B>
    inline bool le(const A &a, const B &b) { return a.value <= b.value; }

    // 大于
    template <typename S, typename U>
    inline bool gt_s_u(const S &a, const U &b)
    {
        if (a.value < 0)
            return false;
        return a.value > b.value;
    }
    // 大于等于
    template <typename S, typename U>
    inline bool ge_s_u(const S &a, const U &b)
    {
        if (a.value < 0)
            return false;
        return a.value >= b.value;
    }
    // 小于
    template <typename S, typename U>
    inline bool lt_s_u(const S &a, const U &b)
    {
        if (a.value < 0)
            return true;
        return a.value < b.value;
    }
    // 小于等于
    template <typename S, typename U>
    inline bool le_s_u(const S &a, const U &b)
    {
        if (a.value < 0)
            return true;
        return a.value <= b.value;
    }
}