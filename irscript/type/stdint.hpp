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

    using Int8 = Int<int8_t, INT8_MIN, INT8_MAX>;
    using Int16 = Int<int16_t, INT16_MIN, INT16_MAX>;
    using Int32 = Int<int32_t, INT32_MIN, INT32_MAX>;
    using Int64 = Int<int64_t, INT64_MIN, INT64_MAX>;

    using Uint8 = Int<uint8_t, 0, UINT8_MAX>;
    using Uint16 = Int<uint16_t, 0, UINT16_MAX>;
    using Uint32 = Int<uint32_t, 0, UINT32_MAX>;
    using Uint64 = Int<uint64_t, 0, UINT64_MAX>;

    static_assert(sizeof(Int8) == 1);
    static_assert(sizeof(Int16) == 2);
    static_assert(sizeof(Int32) == 4);
    static_assert(sizeof(Int64) == 8);

    static_assert(sizeof(Uint8) == 1);
    static_assert(sizeof(Uint16) == 2);
    static_assert(sizeof(Uint32) == 4);
    static_assert(sizeof(Uint64) == 8);

    using int8 = int8_t;
    using int16 = int16_t;
    using int32 = int32_t;
    using int64 = int64_t;

    using uint8 = uint8_t;
    using uint16 = uint16_t;
    using uint32 = uint32_t;
    using uint64 = uint64_t;
}