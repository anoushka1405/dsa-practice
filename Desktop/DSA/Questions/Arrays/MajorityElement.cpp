//optimised - sorting
#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // O(N log N)
    return nums[nums.size() / 2]; // Middle element is always the majority element
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(nums) << endl; // Output: 2
    return 0;
}
