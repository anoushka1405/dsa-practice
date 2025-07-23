int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp; // Stores prefix sums and their frequencies
    int currsum = 0, count = 0;

    mp[0] = 1; // Base case: to handle subarrays that sum to k starting from index 0

    for (int i = 0; i < nums.size(); i++) {
        currsum += nums[i]; // Calculate the prefix sum up to current index

        // Check if there's a prefix sum such that currsum - prefix = k
        // If yes, then there exists a subarray ending at index i which sums to k
        if (mp.find(currsum - k) != mp.end()) {
            count += mp[currsum - k]; // Add the number of times that prefix has occurred
        }

        // Store the current prefix sum in the map
        mp[currsum]++;
    }

    return count; // Return total count of subarrays with sum = k
}
