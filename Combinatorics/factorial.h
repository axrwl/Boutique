// Factorial 
#pragma once
#ifndef BOUTIQUE_FACTORIAL
#define BOUTIQUE_FACTORIAL

#include <cmath>

namespace btq {
    double fact (double n) {
        return tgamma(n+1);
    }

} // namespace boutique

#endif // BOUTIQUE_FACTORIAL_H
