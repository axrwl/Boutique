// Randomly shuffle elements
// Similar function is already implemented in the STL - std::shuffle
// Here it is implemented to gain knowledge and experience
#pragma once
#ifndef BOUTIQUE_SHUFFLE
#define BOUTIQUE_SHUFFLE

#include <iterator>
#include <algorithm>
#include <random>

namespace btq {
    template<typename It, class URNG>
    void shuffle(It begin, It end, URNG&& g) {
        typedef typename std::iterator_traits<It>::difference_type d_t;
        typedef std::uniform_int_distribution<ptrdiff_t> Dp;
        typedef typename Dp::param_type Pp;
        d_t n = end-- - begin;
        if (n>1) {
            Dp uid;
            for (; begin<end; begin++, n--) {
                d_t i = uid(g, Pp(0, n));
                if (i!=d_t(0))
                    std::swap(*begin, *end);
            }
        }
    }
       
    template<typename It>
    void shuffle_mt(It begin, It end) {
        std::random_device rd;
        std::mt19937 g(rd());
        return btq::shuffle(begin, end, g);
    }

} // namespace boutique

#endif // BOUTIQUE_SHUFFLE_H
