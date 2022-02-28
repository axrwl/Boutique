// Insertion Sort
#pragma once
#ifndef BOUTIQUE_INSERTION_SORT
#define BOUTIQUE_INSERTION_SORT



namespace btq {
    template<typename T>
    void insertionSort(T *array, int a, int b) {
        for (int j=a+1; j<b+1; j++) {
            T key = array[j];
            int i = j-1;
            while (i>=a && array[i]>=key) {
                array[i+1] = array[i];
                i--;
            }
            array[i+1] = key;
        }
    }

    template<typename T>
    void insertionSort(T *array, int n) {
        return btq::insertionSort(array, 0, n-1);
    }

} // namespace boutique

#endif // BOUTIQUE_INSERTION_SORT_H
