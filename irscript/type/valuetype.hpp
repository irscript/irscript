#pragma once

#include <irscript/type/rtti.hpp>
namespace irscript
{

    // 值类型
    struct ValueType : Thing
    {
        IRSCRIPT_DEFINE_TYPE(Thing)

    protected:
        ValueType() = default;
    };

// 声明值类型
#define IRSCRIPT_DECLARE_VALUE_TYPE(parent) IRSCRIPT_DEFINE_TYPE(parent)
// 实现值类型
#define IRSCRIPT_IMPLEMENT_VALUE_TYPE(type, parent) IRSCRIPT_IMPLEMENT_TYPE(type, parent, RTTI::value_type)

}