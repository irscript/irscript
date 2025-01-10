#pragma once
#include <cstdint>
#include <irscript/type/valuetype.hpp>
namespace irscript
{
    /*
    struct Int8 : ValueType
    {
        IRSCRIPT_DECLARE_VALUE_TYPE(ValueType)
    public:
        static constexpr int8_t min = INT8_MIN;
        static constexpr int8_t max = INT8_MAX;

        int8_t value;

        inline Int8(int8_t value) : value(value) {}
        inline Int8(const Int8 &rhs) : value(rhs.value) {}

        inline Int8 &operator=(int8_t rhs)
        {
            value = rhs;
            return *this;
        }
        inline Int8 &operator=(const Int8 &rhs)
        {
            value = rhs.value;
            return *this;
        }
    };*/

    template <typename T, const T min_, const T max_>
    struct Int : ValueType
    {
        IRSCRIPT_DECLARE_VALUE_TYPE(ValueType)
    public:
        static constexpr T min = min_;
        static constexpr T max = max_;

        T value;

        inline Int(T value) : value(value) {}
        inline Int(const Int &rhs) : value(rhs.value) {}

        inline Int &operator=(T rhs)
        {
            value = rhs;
            return *this;
        }
        inline Int &operator=(const Int &rhs)
        {
            value = rhs.value;
            return *this;
        }

        // 符号取反
        inline Int operator-() const { return Int(-value); }
        // 按位取反
        inline Int operator~() const { return Int(~value); }

        // 取绝对值
        inline Int operator+() const { return Int(value < 0 ? -value : value); }

        // 转换为bool
        inline operator bool() const { return value != 0; }
    };

    using int8 = Int<int8_t, INT8_MIN, INT8_MAX>;
    using int16 = Int<int16_t, INT16_MIN, INT16_MAX>;
    using int32 = Int<int32_t, INT32_MIN, INT32_MAX>;
    using int64 = Int<int64_t, INT64_MIN, INT64_MAX>;

    using uint8 = Int<uint8_t, 0, UINT8_MAX>;
    using uint16 = Int<uint16_t, 0, UINT16_MAX>;
    using uint32 = Int<uint32_t, 0, UINT32_MAX>;
    using uint64 = Int<uint64_t, 0, UINT64_MAX>;

    static_assert(sizeof(int8) == 1);
    static_assert(sizeof(int16) == 2);
    static_assert(sizeof(int32) == 4);
    static_assert(sizeof(int64) == 8);

    static_assert(sizeof(uint8) == 1);
    static_assert(sizeof(uint16) == 2);
    static_assert(sizeof(uint32) == 4);
    static_assert(sizeof(uint64) == 8);
}