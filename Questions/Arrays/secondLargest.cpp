#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

int findSecondMax(vector<int>& arr) {
    int max = INT_MIN, sec_max = INT_MIN;

    for (int i : arr) {
        if (i > max) {
            sec_max = max;
            max = i;
        } else if (i > sec_max && i != max) {
            sec_max = i;
        }
    }
    
    return (sec_max == INT_MIN) ? -1 : sec_max;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Second Maximum: " << findSecondMax(arr) << endl;
    
    vector<int> arr2 = {10, 10, 10}; // Edge case: All elements same
    cout << "Second Maximum: " << findSecondMax(arr2) << endl; // Should return -1
    
    return 0;
}
