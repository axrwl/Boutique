// Selection Sort
#pragma once
#ifndef BOUTIQUE_SELECTION_SORT
#define BOUTIQUE_SELECTION_SORT



namespace btq {
    template<typename T>
    void selectionSort(T *array, int a, int b) {
        for (auto i=array+a; i<array+b; i++) {
            std::iter_swap(i, std::min_element(i, array+b+1));
        }
    }

    template<typename T>
    void selectionSort(T *array, int n) {
        return btq::selectionSort(array, 0, n-1);
    }

} // namespace boutique

#endif // BOUTIQUE_SELECTION_SORT_H
