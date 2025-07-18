bool checkIthBit(int n, int i) {
        return ((n & (1 << i)) != 0);
    }

// 1<<i creates a number with only ith bit set. n&(1<<i) checks if i'th bit in n is also set. If set, result is non 0 else 0.
