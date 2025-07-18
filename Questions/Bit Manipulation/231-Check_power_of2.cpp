bool isPowerOfTwo(int n) {
        for (int i = 0; i < 31; i++) {
            if (n == (1 << i)) return true;
            if ((1 << i) > n) break;  
        }
        return false;
    }

// a power of 2 in binary form always has only one bit as 1. n-1 flips all bits after rightmost 1. so n&(n-1) zeroes out the only 1 if n is a power of 2.
