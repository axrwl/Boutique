// Returns an iterator to the largest element
// Already implemented in the STL - std::max_element
#pragma once
#ifndef BOUTIQUE_MAX_ELEMENT
#define BOUTIQUE_MAX_ELEMENT


namespace btq {
    template<typename ForwardIt>
    auto max_element(ForwardIt begin, ForwardIt end) {
        if (begin != end) {
            ForwardIt max = begin;
            while (++max != end) {
                if (*begin < *max)
                    begin = max;
            }
        }
        return begin;
    }

    template<typename T>
    auto max_element(T *array, int a, int b) {
        return btq::max_element(array+a, array+b+1);
    }

} // namespace boutique

#endif // BOUTIQUE_MAX_ELEMENT_H
