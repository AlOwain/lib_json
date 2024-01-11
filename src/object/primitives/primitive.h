#pragma once
#include <string>

namespace Object {

class Primitive {
public:
    Primitive(std::string key);

    std::string key();
    virtual int value() = 0;
private:
    std::string m_key;
};

}
