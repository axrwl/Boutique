// Check if string is a palindrome
#pragma once
#ifndef BOUTIQUE_STRING_IF_PALINDROME
#define BOUTIQUE_STRING_IF_PALINDROME

#include <algorithm>
#include <string>

namespace btq {
    bool if_palindrome(std::string s) {
        return std::equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
    }
} // namespace boutique

#endif // BOUTIQUE_STRING_IF_PALINDROME_H
