#include "string.h"

Object::String::String(const char* key, const char* value)
    : Primitive(key), m_value(value) {}

int Object::String::value() { return -1; }
