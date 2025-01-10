#include <irscript/type/rtti.hpp>
#include <irscript/type/valuetype.hpp>
#include <irscript/type/reftype.hpp>
#include <irscript/type/interfacetype.hpp>
#include <irscript/type/stdtype.hpp>

namespace irscript
{

    const RTTI Thing::_rtti_{Thing::_inherit_, RTTI::thing, nullptr};
    const RTTI ValueType::_rtti_{ValueType::_inherit_, RTTI::value_type, &Thing::_rtti_};
    const RTTI RefType::_rtti_{RefType::_inherit_, RTTI::ref_type, &Thing::_rtti_};
    const RTTI InterfaceType::_rtti_{InterfaceType::_inherit_, RTTI::interface_type, &Thing::_rtti_};

    // 整数
    template <>
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(int8, ValueType)
    template <>
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(int16, ValueType)
    template <>
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(int32, ValueType)
    template <>
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(int64, ValueType)

    template <>
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(uint8, ValueType)
    template <>
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(uint16, ValueType)
    template <>
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(uint32, ValueType)
    template <>
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(uint64, ValueType)

    // 浮点数
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(flt32, ValueType);
    IRSCRIPT_IMPLEMENT_VALUE_TYPE(flt64, ValueType);
}