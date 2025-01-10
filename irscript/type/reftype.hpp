#pragma once
#include <irscript/type/rtti.hpp>

namespace irscript
{

    // 引用类型
    struct RefType : Thing
    {
        inline static const RTTI &getRTTI() { return _rtti_; }

    protected:
        RefType() = default;
        virtual ~RefType() = default;
        enum
        {
            _inherit_ = Thing::_inherit_ + 1
        };

        const static RTTI _rtti_;
    };

// 声明引用类型
#define IRSCRIPT_DECLARE_REF_TYPE(parent) IRSCRIPT_DEFINE_TYPE(parent)
// 实现引用类型
#define IRSCRIPT_IMPLEMENT_REF_TYPE(type, parent) IRSCRIPT_IMPLEMENT_TYPE(type, parent, RTTI::ref_type)

}