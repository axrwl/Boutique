// Selection Sort
#pragma once
#ifndef BOUTIQUE_SELECTION_SORT
#define BOUTIQUE_SELECTION_SORT

#include <algorithm>

namespace btq {
    template<typename It>
    void selectionSort(It begin, It end) {
        for (auto i=begin; i<end; i++) {
            std::iter_swap(i, std::min_element(i, end));
        }
    }

    template<typename T>
    void selectionSort(T *array, int a, int b) {
        return btq::selectionSort(array+a, array+b+1);
    }

    template<typename T>
    void selectionSort(T *array, int n) {
        return btq::selectionSort(array, 0, n-1);
    }

} // namespace boutique

#endif // BOUTIQUE_SELECTION_SORT_H
