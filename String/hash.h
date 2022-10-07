// Hashing
#pragma once
#ifndef BOUTIQUE_STRING_HASH
#define BOUTIQUE_STRING_HASH

#include <string>

namespace btq {
    // similar to djb2 hash - http://www.cse.yorku.ca/~oz/hash.html
    unsigned long hash(std::string &s) {
        unsigned long h = 52711;
        for (int i = 0; i < s.size(); i++) {
            h = ((h << 5) + h) + (unsigned char)s[i] * 709;
        }
        return h;
    }
}

#endif