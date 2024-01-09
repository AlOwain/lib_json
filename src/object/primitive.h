#pragma once

namespace Object {

class Primitive {
public:
    Primitive(const char* key);
private:
    const char* m_key;
};

}
