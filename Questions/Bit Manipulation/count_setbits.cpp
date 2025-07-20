
// Brute Force Method: checks each bit one by one
int countSetBitsBruteForce(int n) {
    int count = 0;

    // Iterate through all bits of the number
    while (n > 0) {
        // Check if the last bit is set (1)
        if (n & 1)
            count++;

        // Right shift to check next bit
        n = n >> 1;
    }

    return count;
}

// Optimized Method: Brian Kernighan’s Algorithm
int countSetBitsOptimized(int n) {
    int count = 0;

    // Loop until all set bits are removed
    while (n > 0) {
        // Removes the rightmost set bit
        n = n & (n - 1);
        count++;
    }

    return count;
}
