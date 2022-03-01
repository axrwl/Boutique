// Modular Exponentiation
#pragma once
#ifndef BOUTIQUE_MODULAR_EXPONENTIATION
#define BOUTIQUE_MODULAR_EXPONENTIATION



namespace btq {
    template<typename T>
    T m_prod(T a, T b, T m) {
        if (m == 0)
            return a*b;
        T r{};
        for(; a>0; a>>=1) {
            if (a&1) {
                if ((r += b) > m)
                    r %= m;
            }
            if ((b <<= 1) > m)
                b %= m;
        }
        return r;
    }

    template<typename T>
    T m_exp(T a, T n, T m) {
        T r = 1;
        for(;n>0; n>>=1) {
            if (n&1)
                r = m_prod(r, a, m);
            a = m_prod(a, a, m);
        }
        return r;
    }

} // namespace boutique

#endif // BOUTIQUE_MODULAR_EXPONENTIATION_H
