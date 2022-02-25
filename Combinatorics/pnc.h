// Permutation and Combination
#pragma once
#ifndef BOUTIQUE_PNC
#define BOUTIQUE_PNC

#include "factorial.h"

namespace btq {
    long long ncr (int n, int r) {
        if (r > n)
            return 0;
        if (r > n/2)
            return ncr(n, n-r);
        if (r == 0)
            return 1;
        
        long long ret = n;
        for(int i=2; i<r+1; i++) {
            ret *= (n-i+1);
            ret /= i;
        }
        return ret;
        
    }

    long long npr (int n, int r) {
        if (r > n)
            return 0;
        if (r > n/2)
            return npr(n, n-r);
        if (r == 0)
            return 1;
        
        return btq::fact(r)*btq::ncr(n, r);
        
    }

} // namespace boutique

#endif // BOUTIQUE_PNC_H
