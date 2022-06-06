// Knuth Morris Pratt Search
#pragma once
#ifndef BOUTIQUE_KMP
#define BOUTIQUE_KMP

#include <algorithm>
#include <string>

namespace btq {
    std::vector<int> kmp_table(std::string s) {
        int p = 1, c = 0;
        std::vector <int> v;
        v.insert(v.begin(), -1);
        while (p < s.size()) {
            if (s[p] == s[c]) {
                v.push_back(c);
                p++; c++;
            } 
            else if (c > 0) {
                c = v[c - 1] + 1;
            } 
            else {
                v.push_back(c);
                p++;
            }
        }
        return v;
    }

    std::vector<int> kmp(std::string s, std::string w) {
        int i = 0, j = 0;
        std::vector<int> v = kmp_table(w);
        std::vector<int> p;
        while (i < s.size()) {
            if (s[i] == w[j]) {
                i++; j++;
            } 
            else if (j > 0) {
                j = v[j - 1] + 1;
            } 
            else {
                i++;
            }
            if (j == w.size()) {
                p.push_back(i - j);
                j = v[j - 1] + 1;
            }
        }
        return p;
    }
} // namespace boutique

#endif // BOUTIQUE_KMP_H