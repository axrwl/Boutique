// Permutation Sort
#pragma once
#ifndef BOUTIQUE_PERMUTATION_SORT
#define BOUTIQUE_PERMUTATION_SORT

#include <algorithm>

namespace btq {
    template<typename T>
    void permutationSort(T *array, int a, int b) {
        while (std::next_permutation(array+a, array+b+1));
    }

    template<typename T>
    void permutationSort(T *array, int n) {
        return permutationSort(array, 0, n-1);
    }

} // namespace boutique

#endif // BOUTIQUE_PERMUTATION_SORT_H
