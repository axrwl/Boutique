// Bell numbers
#pragma once
#ifndef BOUTIQUE_BELL
#define BOUTIQUE_BELL

// #include "pnc.h"

namespace btq {
    const int bellNumbers[16] = {1,1,2,5,15,52,203,877,4140,21147,115975,678570,4213597,27644437,190899322,1382958545};
    const long long bellNumbers2[10] = {10480142147,82864869804,682076806159,5832742205057,51724158235372,474869816156751,4506715738447323,44152005855084346,445958869294805289,4638590332229999353};
    long long bell(int n) {
        if (n < 0)
            return 0;
        if (n < 16)
            return bellNumbers[n];
        if (n < 26)
            return bellNumbers2[n-16];
        return 0;
        // long long r = 0;
        // for (int i = 0; i < n; i++) {
        //     r += btq::ncr(n-1, i) * bell(i);
        // }
        // return r; 

        // Overflows at n = 26
    }

}

#endif
