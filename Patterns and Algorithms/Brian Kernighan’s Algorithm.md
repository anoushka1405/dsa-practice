## Brian Kernighan’s Algorithm — Count Set Bits

Problem:
Given an integer `n`, count the number of set bits (1s) in its binary representation.


Brute Force Approach:

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;  // check least significant bit
        n >>= 1;             // right shift
    }
    return count;
}

- Time Complexity: O(log n)
- Idea: Check each bit individually.
##

Optimized: Brian Kernighan’s Algorithm:
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1);  // remove the rightmost set bit
        count++;
    }
    return count;
}

- Time Complexity: O(number of set bits)
- Why it works: 
  n - 1 flips all bits after the rightmost set bit (including it).  
  n & (n - 1) removes the lowest set bit in each iteration.


Dry Run (n = 13):
Binary of 13: 1101

1st: 1101 & 1100 = 1100 → count = 1  
2nd: 1100 & 1011 = 1000 → count = 2  
3rd: 1000 & 0111 = 0000 → count = 3

→ Answer = 3 set bits
##

Use Cases:
- Counting set bits (Hamming weight)
- Checking if a number is a power of 2 → (`n & (n - 1)) == 0`)
- Bitmask operations
- Problems involving subsets, toggles, or bit parity

##

Time Complexity - 

Brute Force - O(log n)         
Brian Kernighan - O(set bits in n) 
