#pragma once
#include <string>
#include <vector>
#include "../primitives/string.h"
#include "../primitives/number.h"

namespace Object {

struct Leaf {
    std::vector<Leaf*> children;
    Primitive* object;

    Leaf* operator[](std::string key);
};

class Tree {
public:
    Tree();

    void add(Object::Primitive* object);
    std::string to_string(Leaf curr);
    Leaf root;
private:
    int size;
};

}
