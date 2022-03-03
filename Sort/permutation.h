// Permutation Sort
#pragma once
#ifndef BOUTIQUE_PERMUTATION_SORT
#define BOUTIQUE_PERMUTATION_SORT

#include <algorithm>

namespace btq {
    template<typename It>
    void permutationSort(It begin, It end) {
        while (std::next_permutation(begin, end));
    }

    template<typename T>
    void permutationSort(T *array, int a, int b) {
        return btq::permutationSort(array+a, array+b+1);
    }

    template<typename T>
    void permutationSort(T *array, int n) {
        return btq::permutationSort(array, 0, n-1);
    }

} // namespace boutique

#endif // BOUTIQUE_PERMUTATION_SORT_H
