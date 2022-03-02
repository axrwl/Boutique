// Heap Sort
#pragma once
#ifndef BOUTIQUE_HEAP_SORT
#define BOUTIQUE_HEAP_SORT

#include <algorithm>

namespace btq {
    template<typename It>
    void heapSort(It begin, It end) {
        std::make_heap(begin, end);
        std::sort_heap(begin, end);
    }

    template<typename T>
    void heapSort(T *array, int a, int b) {
        return btq::heapSort(array+a, array+b+1);
    }

} // namespace boutique

#endif // BOUTIQUE_HEAP_SORT_H
