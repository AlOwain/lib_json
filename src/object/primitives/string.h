#pragma once
#include "primitive.h"

namespace Object {

class String : public Primitive {
public:
    String(const char* key, const char* value);

    const char* value();
private:
    const char* m_value;
};

}
