#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
Problem: Find the majority element (appears more than n/2 times) in an array.
Assumption: Majority element always exists.
*/


// Approach 1: Brute Force
// Time Complexity: O(n^2)

int majorityElementBruteForce(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count frequency of nums[i]
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }

        // If count > n/2, it's the majority
        if (count > n / 2) {
            return nums[i];
        }
    }

    return -1; // Will not reach here if majority always exists
}


// Approach 2: Hash Map
// Time Complexity: O(n), Space Complexity: O(n)
int majorityElementHashMap(vector<int>& nums) {
    unordered_map<int, int> freq;
    int n = nums.size();

    // Store frequency of each number
    for (int num : nums) {
        freq[num]++;
        // If frequency exceeds n/2, return that number
        if (freq[num] > n / 2)
            return num;
    }

    return -1; // Will not reach here if majority always exists
}

// Approach 3: Moore's Voting Algorithm
// Time Complexity: O(n), Space Complexity: O(1)

int majorityElementMooreVoting(vector<int>& nums) {
    int count = 0, candidate = 0;

    // First Pass: Find a potential candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num; // Assume current number might be majority
        }
        count += (num == candidate) ? 1 : -1; // Adjust count
    }

    return candidate;
}
