// Left fold
// Already implemented in the STL - std::accumulate
#pragma once
#ifndef BOUTIQUE_FOLD
#define BOUTIQUE_FOLD

#include <utility>

namespace btq {
    template<typename T, typename InputIt, typename BinaryOp>
    T fold(InputIt begin, InputIt end, T i, BinaryOp orz) {
        while (begin != end) {
            i = orz(std::move(i), *begin);
            begin++;
        }
        return i;
    }

    template<typename T, typename BinaryOp>
    auto fold(T *array, int a, int b, T i, BinaryOp orz) {
        return btq::fold(array+a, array+b+1, i, orz);
    }

} // namespace boutique

#endif // BOUTIQUE_MAX_FOLD_H
