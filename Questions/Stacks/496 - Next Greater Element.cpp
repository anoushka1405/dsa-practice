class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;  // Maps each element in nums2 to its next greater element
        stack<int> st;              // Monotonic stack to track elements for which we haven't found the next greater yet

        // Traverse nums2 to fill the map with next greater elements
        for (int num : nums2) {
            // While current num is greater than stack's top, it is the next greater for that top
            while (!st.empty() && num > st.top()) {
                mp[st.top()] = num;  // Map the popped element to its next greater num
                st.pop();
            }
            st.push(num); // Push current element onto stack
        }

        // For remaining elements in stack, no next greater exists, so assign -1
        while (!st.empty()) {
            mp[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        // For each element in nums1, append its next greater element from the map
        for (int num : nums1) {
            ans.push_back(mp[num]);
        }

        return ans;
    }
};
