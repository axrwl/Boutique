// Catalan numbers
#pragma once
#ifndef BOUTIQUE_CATALAN
#define BOUTIQUE_CATALAN

//#include "pnc.h"
#include <cmath>
#include <numbers>

namespace btq {
    const int catalanNumbersCache[15] = {1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, 742900, 2674440};
    long long cat(int n) {
        if (n < 15)
            return catalanNumbersCache[n];
        return pow(4, n) * std::tgamma(n + 0.5) * std::numbers::inv_sqrtpi_v<long double>/std::tgamma(n+2);
        
        // can also implement in terms of ncr
        // return btq::ncr(2*n, n)/(n+1);
        
        
    }

}

#endif
