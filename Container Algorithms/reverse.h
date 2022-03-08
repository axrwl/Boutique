// Reverses order of elements
// Already implemented in the STL - std::reverse
#pragma once
#ifndef BOUTIQUE_REVERSE
#define BOUTIQUE_REVERSE

#include <iterator>
#include <algorithm>

namespace btq {
    template<typename BidirIt>
    void reverse(BidirIt begin, BidirIt end) {
        while (begin != end) {
            if (begin == --end)
                break;
            std::iter_swap(begin, end);
            begin++;
        }
    }

    template<typename T>
    void reverse(T *array, int a, int b) {
        return btq::reverse(array+a, array+b+1);
    }

} // namespace boutique

#endif // BOUTIQUE_REVERSE_H
