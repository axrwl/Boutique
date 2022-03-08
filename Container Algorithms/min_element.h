// Returns an iterator to the smallest element
// Already implemented in the STL - std::min_element
#pragma once
#ifndef BOUTIQUE_MIN_ELEMENT
#define BOUTIQUE_MIN_ELEMENT


namespace btq {
    template<typename ForwardIt>
    auto min_element(ForwardIt begin, ForwardIt end) {
        if (begin != end) {
            ForwardIt min = begin;
            while (++min != end) {
                if (*begin > *min)
                    begin = min;
            }
        }
        return begin;
    }

    template<typename T>
    auto min_element(T *array, int a, int b) {
        return btq::min_element(array+a, array+b+1);
    }

} // namespace boutique

#endif // BOUTIQUE_MIN_ELEMENT_H
