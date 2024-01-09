#include "number.h"
#include "primitive.h"

template class Object::Number<double>;
template class Object::Number<int>;
template class Object::Number<long long>;

template <typename T>
Object::Number<T>::Number(const char* key, T value)
    : Primitive(key), m_value(value) {}

template <typename T>
T Object::Number<T>::value() { return m_value; }
