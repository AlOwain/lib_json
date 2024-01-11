#include "tree.h"
#include <string>

Object::Leaf* Object::Leaf::operator[](std::string key)
{
    for (Leaf* child : children)
        if (child->object->key() == key) return child;

    // TODO: Handle error properly
    return nullptr;
}

Object::Tree::Tree()
{
    size = 0;

    // This should not be necessary, I don't know if it may cause any issues
    // but it may.
    root = { {}, new Object::Number<int>("root", 0)};
}

std::string Object::Tree::to_string(Leaf curr)
{
    std::string x;
    x.append(curr.object->key());
    if (curr.children.size() != 0)
        for (Leaf* child : curr.children)
            x.append(" " + to_string(*child));
    return x;
}
void Object::Tree::add(Object::Primitive* object)
{
    // TODO: No one can create children, all elements are created under the root.
    //       Create the ability to add a child under a certain element.
    //       That element must be created under the keyed operator[]
    root.children.push_back(new Object::Leaf({{}, object}));
}
