#include "string.h"
#include "primitive.h"

Object::String::String(const char* key, const char* value)
    : Primitive(key), m_value(value) {}

const char* Object::String::value() { return m_value; }
