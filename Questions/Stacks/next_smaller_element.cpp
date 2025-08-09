 vector<int> nextSmallerElements(const vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1); // Initialize result vector with -1
        stack<int> st;          // Stack to store indices

        for (int i = 0; i < n; i++) {
            // While current element is smaller than element at index st.top()
            while (!st.empty() && arr[i] < arr[st.top()]) {
                ans[st.top()] = arr[i]; // Current element is next smaller for st.top()
                st.pop();
            }
            st.push(i);
        }

        // Remaining elements in stack do not have a smaller element to the right, so ans stays -1
        return ans;
    }
