//Product of array except self
#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);  // Initialize answer array with 1

    // Prefix product
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Suffix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;   // Multiply with suffix product
        suffix *= nums[i];  // Update suffix product
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    
    vector<int> result = productExceptSelf(nums);

    cout << "Product of array except self: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
