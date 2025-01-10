#include <irscript/type/stdtype.hpp>

using namespace irscript;

int main()
{

    int8 i8(-1);

    auto a = ~i8;
    auto b = -i8;
    auto r = +i8;
    if (r)
    {
        auto sub = uint8::max + uint8::min;
    }
    return 0;
}