/*
   Sliding Window Technique:
   - Only works for positive integers
   - Expand window with 'end' until sum exceeds k
   - Shrink from 'start' if sum > k
   - Update max length when sum == k
*/

int longestSubarray(vector<int> &nums, int k) {
    int end = 0, start = 0;
    int CurrSum = 0, MaxLen = 0;

    while (end < nums.size()) {
        CurrSum += nums[end];  // expand the window

        // shrink the window if sum exceeds k
        while (CurrSum > k) {
            CurrSum -= nums[start];
            start++;
        }

        // check for exact match
        if (CurrSum == k) {
            MaxLen = max(MaxLen, end - start + 1);
        }

        end++;  // move the window forward
    }

    return MaxLen;
}
