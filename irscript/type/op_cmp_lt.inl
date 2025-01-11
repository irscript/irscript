
#define op_cmp_lt(x, y) \
    inline bool operator<(const x &lhs, const y &rhs) { return lhs.value < rhs.value; }

op_cmp_lt(Int8, Int8)
    op_cmp_lt(Int8, Int16)
        op_cmp_lt(Int8, Int32)
            op_cmp_lt(Int8, Int64);

op_cmp_lt(Int16, Int8)
    op_cmp_lt(Int16, Int16)
        op_cmp_lt(Int16, Int32)
            op_cmp_lt(Int16, Int64);

op_cmp_lt(Int32, Int8)
    op_cmp_lt(Int32, Int16)
        op_cmp_lt(Int32, Int32)
            op_cmp_lt(Int32, Int64);

op_cmp_lt(Int64, Int8)
    op_cmp_lt(Int64, Int16)
        op_cmp_lt(Int64, Int32)
            op_cmp_lt(Int64, Int64);

op_cmp_lt(Uint8, Uint8)
    op_cmp_lt(Uint8, Uint16)
        op_cmp_lt(Uint8, Uint32)
            op_cmp_lt(Uint8, Uint64);

op_cmp_lt(Uint16, Uint8)
    op_cmp_lt(Uint16, Uint16)
        op_cmp_lt(Uint16, Uint32)
            op_cmp_lt(Uint16, Uint64);

op_cmp_lt(Uint32, Uint8)
    op_cmp_lt(Uint32, Uint16)
        op_cmp_lt(Uint32, Uint32)
            op_cmp_lt(Uint32, Uint64);

op_cmp_lt(Uint64, Uint8)
    op_cmp_lt(Uint64, Uint16)
        op_cmp_lt(Uint64, Uint32)
            op_cmp_lt(Uint64, Uint64);

op_cmp_lt(Flt32, Flt32)
    op_cmp_lt(Flt32, Flt64);

op_cmp_lt(Flt64, Flt32)
    op_cmp_lt(Flt64, Flt64);
#undef op_cmp_lt

#define op_cmp_lt(s, u)                               \
    inline bool operator<(const s &lhs, const u &rhs) \
    {                                                 \
        if (lhs.value < 0)                            \
            return true;                              \
        return lhs.value < rhs.value;                 \
    }                                                 \
    inline bool operator<(const u &lhs, const s &rhs) \
    {                                                 \
        if (rhs.value < 0)                            \
            return false;                             \
        return lhs.value < rhs.value;                 \
    }

op_cmp_lt(Int8, Uint8)
    op_cmp_lt(Int8, Uint16)
        op_cmp_lt(Int8, Uint32)
            op_cmp_lt(Int8, Uint64);

op_cmp_lt(Int16, Uint8)
    op_cmp_lt(Int16, Uint16)
        op_cmp_lt(Int16, Uint32)
            op_cmp_lt(Int16, Uint64);

op_cmp_lt(Int32, Uint8)
    op_cmp_lt(Int32, Uint16)
        op_cmp_lt(Int32, Uint32)
            op_cmp_lt(Int32, Uint64);

op_cmp_lt(Int64, Uint8)
    op_cmp_lt(Int64, Uint16)
        op_cmp_lt(Int64, Uint32)
            op_cmp_lt(Int64, Uint64);

#undef op_cmp_lt

#define op_cmp_lt(x, y)                                                           \
    inline bool operator<(const x &lhs, const y &rhs) { return lhs.value < rhs; } \
    inline bool operator<(const y &lhs, const x &rhs) { return lhs < rhs.value; }

op_cmp_lt(Int8, int8_t)
    op_cmp_lt(Int8, int16_t)
        op_cmp_lt(Int8, int32_t)
            op_cmp_lt(Int8, int64_t);

op_cmp_lt(Int16, int8_t)
    op_cmp_lt(Int16, int16_t)
        op_cmp_lt(Int16, int32_t)
            op_cmp_lt(Int16, int64_t);

op_cmp_lt(Int32, int8_t)
    op_cmp_lt(Int32, int16_t)
        op_cmp_lt(Int32, int32_t)
            op_cmp_lt(Int32, int64_t);

op_cmp_lt(Int64, int8_t)
    op_cmp_lt(Int64, int16_t)
        op_cmp_lt(Int64, int32_t)
            op_cmp_lt(Int64, int64_t);

op_cmp_lt(Uint8, uint8_t)
    op_cmp_lt(Uint8, uint16_t)
        op_cmp_lt(Uint8, uint32_t)
            op_cmp_lt(Uint8, uint64_t);

op_cmp_lt(Uint16, uint8_t)
    op_cmp_lt(Uint16, uint16_t)
        op_cmp_lt(Uint16, uint32_t)
            op_cmp_lt(Uint16, uint64_t);

op_cmp_lt(Uint32, uint8_t)
    op_cmp_lt(Uint32, uint16_t)
        op_cmp_lt(Uint32, uint32_t)
            op_cmp_lt(Uint32, uint64_t);

op_cmp_lt(Uint64, uint8_t)
    op_cmp_lt(Uint64, uint16_t)
        op_cmp_lt(Uint64, uint32_t)
            op_cmp_lt(Uint64, uint64_t);

op_cmp_lt(Flt32, float)
    op_cmp_lt(Flt32, double);

op_cmp_lt(Flt64, float)
    op_cmp_lt(Flt64, double);
#undef op_cmp_lt

#define op_cmp_lt(s, u)                               \
    inline bool operator<(const s &lhs, const u &rhs) \
    {                                                 \
        if (lhs.value < 0)                            \
            return true;                              \
        return lhs.value < rhs;                       \
    }                                                 \
    inline bool operator<(const u &lhs, const s &rhs) \
    {                                                 \
        if (rhs.value < 0)                            \
            return false;                             \
        return lhs < rhs.value;                       \
    }

op_cmp_lt(Int8, uint8_t)
    op_cmp_lt(Int8, uint16_t)
        op_cmp_lt(Int8, uint32_t)
            op_cmp_lt(Int8, uint64_t);

op_cmp_lt(Int16, uint8_t)
    op_cmp_lt(Int16, uint16_t)
        op_cmp_lt(Int16, uint32_t)
            op_cmp_lt(Int16, uint64_t);

op_cmp_lt(Int32, uint8_t)
    op_cmp_lt(Int32, uint16_t)
        op_cmp_lt(Int32, uint32_t)
            op_cmp_lt(Int32, uint64_t);

op_cmp_lt(Int64, uint8_t)
    op_cmp_lt(Int64, uint16_t)
        op_cmp_lt(Int64, uint32_t)
            op_cmp_lt(Int64, uint64_t);

#undef op_cmp_lt

#define op_cmp_lt(u, s)                               \
    inline bool operator<(const u &lhs, const s &rhs) \
    {                                                 \
        if (rhs < 0)                                  \
            return false;                             \
        return lhs.value < rhs;                       \
    }                                                 \
    inline bool operator<(const s &lhs, const u &rhs) \
    {                                                 \
        if (lhs < 0)                                  \
            return true;                              \
        return lhs < rhs.value;                       \
    }

op_cmp_lt(Uint8, int8_t)
    op_cmp_lt(Uint8, int16_t)
        op_cmp_lt(Uint8, int32_t)
            op_cmp_lt(Uint8, int64_t);

op_cmp_lt(Uint16, int8_t)
    op_cmp_lt(Uint16, int16_t)
        op_cmp_lt(Uint16, int32_t)
            op_cmp_lt(Uint16, int64_t);

op_cmp_lt(Uint32, int8_t)
    op_cmp_lt(Uint32, int16_t)
        op_cmp_lt(Uint32, int32_t)
            op_cmp_lt(Uint32, int64_t);

op_cmp_lt(Uint64, int8_t)
    op_cmp_lt(Uint64, int16_t)
        op_cmp_lt(Uint64, int32_t)
            op_cmp_lt(Uint64, int64_t);

#undef op_cmp_lt