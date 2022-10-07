// Rabin Karp Algorithm
#pragma once
#ifndef BOUTIQUE_RABIN_KARP
#define BOUTIQUE_RABIN_KARP

#include <string>
#include <vector>

#include "hash.h"

namespace btq {
    std::vector<int> rabinkarp(std::string &s, std::string &p) {
        unsigned long hp = btq::hash(p);
        std::vector<int> r;
        for (int i = 0; i < s.size() - p.size() + 2; i++) {
            std::string sub = s.substr(i, p.size());
            unsigned long hs = btq::hash(sub);
            if ((hs == hp) && (sub == p)) {
                r.push_back(i);
            }
        }
        return r;
    }
}

#endif