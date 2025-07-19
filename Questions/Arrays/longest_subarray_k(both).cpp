/*
   Works with negative numbers — Prefix Sum + HashMap

   Logic:
   - Store (prefixSum -> first index)
   - At each step, check if (currSum - k) exists in map. If yes, subarray from that index + 1 to current index sums to K
   - Keep track of longest length
*/


//uses Prefix Sum + HashMap
int longestSubarrayWithSumK(vector<int>& nums, int k) {
    unordered_map<int, int> prefixMap;  // Stores: (prefixSum → firstIndex)
    int currSum = 0;
    int maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];  // Update running sum

        // Case 1: Subarray from index 0 to i sums to k
        if (currSum == k) {
            maxLen = i + 1;
        }

        // Case 2: Subarray with sum = k exists between some previous index and i
        // Check if (currSum - k) is already in the map
        if (prefixMap.find(currSum - k) != prefixMap.end()) {
            int prevIndex = prefixMap[currSum - k];
            int length = i - prevIndex;
            maxLen = max(maxLen, length);
        }

        // Store the first occurrence of current prefix sum
        if (prefixMap.find(currSum) == prefixMap.end()) {
            prefixMap[currSum] = i;
        }
    }

    return maxLen;
}
