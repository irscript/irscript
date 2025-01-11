#pragma once

#include <irscript/type/valuetype.hpp>
#include <float.h>
namespace irscript
{

    struct Flt32 : ValueType
    {
        IRSCRIPT_DECLARE_VALUE_TYPE(ValueType)
    public:
        static constexpr float min = FLT_MIN;
        static constexpr float max = FLT_MAX;

        float value;

        inline Flt32(float value) : value(value) {}
        inline Flt32(const Flt32 &rhs) : value(rhs.value) {}

        inline Flt32 &operator=(float rhs)
        {
            value = rhs;
            return *this;
        }
        inline Flt32 &operator=(const Flt32 &rhs)
        {
            value = rhs.value;
            return *this;
        }

        // 符号取反
        inline Flt32 operator-() const { return Flt32(-value); }

        // 取绝对值
        inline Flt32 operator+() const { return Flt32(value < 0 ? -value : value); }

        // 转换为bool
        inline operator bool() const { return value != 0; }
    };

    static_assert(sizeof(Flt32) == 4, "flt32 size error");

    struct Flt64 : ValueType
    {
        IRSCRIPT_DECLARE_VALUE_TYPE(ValueType)
    public:
        static constexpr double min = DBL_MIN;
        static constexpr double max = DBL_MAX;

        double value;

        inline Flt64(double value) : value(value) {}
        inline Flt64(const Flt64 &rhs) : value(rhs.value) {}

        inline Flt64 &operator=(double rhs)
        {
            value = rhs;
            return *this;
        }
        inline Flt64 &operator=(const Flt64 &rhs)
        {
            value = rhs.value;
            return *this;
        }

        // 符号取反
        inline Flt64 operator-() const { return Flt64(-value); }

        // 取绝对值
        inline Flt64 operator+() const { return Flt64(value < 0 ? -value : value); }

        // 转换为bool
        inline operator bool() const { return value != 0; }
    };

    static_assert(sizeof(Flt64) == 8, "flt32 size error");

    using flt32 = float;
    using flt64 = double;
}