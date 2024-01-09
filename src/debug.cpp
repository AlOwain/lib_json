#include <iostream>
#include "object/string.h"

int main(int argc, char** argv)
{
    Object::String s("hello", "world");

    std::cout << s.value() << std::endl;
    return 0;
}
