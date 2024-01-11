#include "primitive.h"

Object::Primitive::Primitive(std::string key) : m_key(key) {}

std::string Object::Primitive::key() { return m_key; }

int Object::Primitive::value() { return 0; }
