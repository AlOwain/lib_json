#include <iostream>
#include "object/primitives/number.h"
#include "object/tree/tree.h"

int main(int argc, char** argv)
{
    Object::Tree s;
    std::cout << s.to_string(s.root) << std::endl;
    s.add(new Object::Number<int>("first_num1", 5));
    std::cout << s.to_string(s.root) << std::endl;
    s.add(new Object::Number<int>("num2", 5));
    s.add(new Object::Number<int>("num3", 2));
    s.add(new Object::Number<int>("num4", 1));
    std::cout << s.to_string(s.root) << std::endl;
    
    return 0;
}
