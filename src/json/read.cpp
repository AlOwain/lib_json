#include "json.h"

void JSON::read(const char* filepath)
{
    std::ifstream input(filepath);

    if (!input.good()) exit(-1);
    char next_char;
    bool eof = false;

    while (!eof)
    {
        next_char = input.get();
        
        switch (next_char) {
            case EOF:
                eof = true;
            break;
        }
    }
}
