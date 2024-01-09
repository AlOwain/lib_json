#include <iostream>
#include "object/number.h"
#include "object/string.h"

int main(int argc, char** argv)
{
    Object::String s("hello", "world");

    Object::Number<int> y("hi", 5);

    std::cout << s.value() << std::endl;
    std::cout << y.value() << std::endl;

    Object::Primitive* x = &y;
    std::cout << x->value() << std::endl;
    return 0;
}
