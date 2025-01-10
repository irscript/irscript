#pragma once

#include <irscript/type/valuetype.hpp>
#include <float.h>
namespace irscript
{

    struct flt32 : ValueType
    {
        IRSCRIPT_DECLARE_VALUE_TYPE(ValueType)
    public:
        static constexpr float min = FLT_MIN;
        static constexpr float max = FLT_MAX;

        float value;

        inline flt32(float value) : value(value) {}
        inline flt32(const flt32 &rhs) : value(rhs.value) {}

        inline flt32 &operator=(float rhs)
        {
            value = rhs;
            return *this;
        }
        inline flt32 &operator=(const flt32 &rhs)
        {
            value = rhs.value;
            return *this;
        }

        // 符号取反
        inline flt32 operator-() const { return flt32(-value); }

        // 取绝对值
        inline flt32 operator+() const { return flt32(value < 0 ? -value : value); }

        // 转换为bool
        inline operator bool() const { return value != 0; }
    };

    static_assert(sizeof(flt32) == 4, "flt32 size error");

    struct flt64 : ValueType
    {
        IRSCRIPT_DECLARE_VALUE_TYPE(ValueType)
    public:
        static constexpr double min = DBL_MIN;
        static constexpr double max = DBL_MAX;

        double value;

        inline flt64(double value) : value(value) {}
        inline flt64(const flt64 &rhs) : value(rhs.value) {}

        inline flt64 &operator=(double rhs)
        {
            value = rhs;
            return *this;
        }
        inline flt64 &operator=(const flt64 &rhs)
        {
            value = rhs.value;
            return *this;
        }

        // 符号取反
        inline flt64 operator-() const { return flt64(-value); }

        // 取绝对值
        inline flt64 operator+() const { return flt64(value < 0 ? -value : value); }

        // 转换为bool
        inline operator bool() const { return value != 0; }
    };

    static_assert(sizeof(flt64) == 8, "flt32 size error");
}