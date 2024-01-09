#pragma once
#include "primitive.h"

namespace Object {

class String : Primitive {
public:
    String(const char* key, const char* value);

    const char* value();
private:
    const char* m_value;
};

}
