// Bubble Sort
#pragma once
#ifndef BOUTIQUE_BUBBLE_SORT
#define BOUTIQUE_BUBBLE_SORT


namespace btq {
    template<typename T>
    void bubbleSort(T *array, int a, int b) {
        bool swap = true;
        int bubble = 1;
        while (swap) {
            swap = false;
            for (int i=a; i<b+1-bubble; i++) {
                if (array[i] > array[i+1]) {
                    swap = true;
                    std::swap(array[i], array[i+1]);
                }
            }
            bubble++;
        }
    }
    
    template<typename T>
    void bubbleSort(T *array, int n) {
        btq::bubbleSort(array, 0, n-1);
    }


} // namespace boutique

#endif // BOUTIQUE_BUBBLE_SORT_H
