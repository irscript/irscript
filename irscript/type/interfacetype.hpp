#pragma once
#include <irscript/type/rtti.hpp>
namespace irscript
{

    // 接口类型
    struct InterfaceType : Thing
    {
        IRSCRIPT_DEFINE_TYPE(Thing)

    protected:
        InterfaceType() = default;
    };

// 声明接口类型
#define IRSCRIPT_DECLARE_INTERFACE_TYPE(parent) IRSCRIPT_DEFINE_TYPE(parent)
// 实现接口类型
#define IRSCRIPT_IMPLEMENT_INTERFACE_TYPE(type, parent) IRSCRIPT_IMPLEMENT_TYPE(type, parent, RTTI::interface_type)

}