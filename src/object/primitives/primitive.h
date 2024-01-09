#pragma once

namespace Object {

class Primitive {
public:
    Primitive(const char* key);

    virtual int value();
private:
    const char* m_key;
};

}
