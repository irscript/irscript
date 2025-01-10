#pragma once

#include <irscript/type/rtti.hpp>
namespace irscript
{

    // 值类型
    struct ValueType : Thing
    {
        inline static const RTTI &getRTTI() { return _rtti_; }

    protected:
        ValueType() = default;
        enum
        {
            _inherit_ = Thing::_inherit_ + 1
        };

        const static RTTI _rtti_;
    };

// 声明值类型
#define IRSCRIPT_DECLARE_VALUE_TYPE(parent) IRSCRIPT_DEFINE_TYPE(parent)
// 实现值类型
#define IRSCRIPT_IMPLEMENT_VALUE_TYPE(type, parent) IRSCRIPT_IMPLEMENT_TYPE(type, parent, RTTI::value_type)

}