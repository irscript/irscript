#include <irscript/type/stdtype.hpp>

using namespace irscript;

int main()
{

    Int8 i8(-1);

    auto a = ~i8;
    auto b = -i8;
    auto r = +i8;
    if (r)
    {
        auto sub = Uint8::max + Uint8::min;
        auto c = i8 < 1;
    }
    return 0;
}