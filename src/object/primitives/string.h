#pragma once
#include "primitive.h"
#include <string>

namespace Object {

class String : public Primitive {
public:
    String(const char* key, const char* value);

    int value();
private:
    const char* m_value;
};

}
