// GCD
#pragma once
#ifndef GCD_PNC
#define GCD_PNC


namespace btq {
    int gcd(int x, int y) {
        if (x == 0)
            return y;
        if (y == 0)
            return x;
        int ctz_x = __builtin_ctz(x);
        int ctz_y = __builtin_ctz(y);
        int ls = std::min(ctz_x, ctz_y);
        y >>= ctz_y;
        while (x!=0) {
            x >>= ctz_x;
            int y_ = y;
            ctz_x = __builtin_ctz(y-x);
            y = std::min(x, y);
            x = std::abs(y_-x);
        }
        return y << ls;
    }
        
    int lcm(int x, int y) {
        return x/gcd(x, y)*y;
    }

    long long gcd(long long x, long long y) {
        if (x == 0)
            return y;
        if (y == 0)
            return x;
        long long ctz_x = __builtin_ctzll(x);
        long long ctz_y = __builtin_ctzll(y);
        long long ls = std::min(ctz_x, ctz_y);
        y >>= ctz_y;
        while (x!=0) {
            x >>= ctz_x;
            long long y_ = y;
            ctz_x = __builtin_ctzll(y-x);
            y = std::min(x, y);
            x = std::abs(y_-x);
        }
        return y << ls;
    }

    long long lcm(long long x, long long y) {
        return x/gcd(x, y)*y;
    }
        

} // namespace boutique

#endif // BOUTIQUE_GCD_H
