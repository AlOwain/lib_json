#pragma once
#include "primitive.h"

namespace Object {

template <typename T>
class Number : public Primitive {
public:
    Number(const char* key, T value);

    T value();
private:
    T m_value;
};

}
