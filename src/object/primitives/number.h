#pragma once
#include "primitive.h"
#include <string>

namespace Object {

template <typename T>
class Number : public Primitive {
public:
    Number(std::string key, T value);

    int value();
private:
    T m_value;
};

}
