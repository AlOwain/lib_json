#include <fstream>
#include <string>
#include <vector>
#include "../object/primitive.h"
#include "../../lib/stack/stack.h"

class JSON {
public:
    JSON(const char* filepath);

    void read(const char* filepath);

    // TODO: create a operator[] overload that uses the key
    Object::Primitive get_object(const char* key);
private:
    Object::Primitive* objects;
};
