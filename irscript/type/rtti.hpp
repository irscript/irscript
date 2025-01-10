#pragma once
#include <cstdint>

namespace irscript
{

    struct RTTI
    {
        const int inherit_ = 0;
        const int mask = 0;
        const RTTI *const parent_ = nullptr;

        enum
        {
            thing = 0,
            value_type = 1 << 0,
            ref_type = 1 << 1,
            interface_type = 1 << 2,
        };
    };

    // 万物归一
    struct Thing
    {
        inline static const RTTI &getRTTI() { return _rtti_; }
        inline static const RTTI *getRTTIptr() { return &_rtti_; }

    protected:
        Thing() = default;

        enum
        {
            _inherit_ = 0 // 继承代数
        };

        const static RTTI _rtti_;
    };
// 定义类型
#define IRSCRIPT_DEFINE_TYPE(parent)                           \
public:                                                        \
    inline static const RTTI &getRTTI() { return _rtti_; }     \
    inline static const RTTI *getRTTIptr() { return &_rtti_; } \
                                                               \
protected:                                                     \
    enum                                                       \
    {                                                          \
        _inherit_ = parent::_inherit_ + 1                      \
    };                                                         \
    const static RTTI _rtti_;

// 实现类型
#define IRSCRIPT_IMPLEMENT_TYPE(type, parent, mask) \
    const RTTI type::_rtti_{type::_inherit_, mask, &parent::_rtti_};

}