#include <iostream>
#include <vector>
using namespace std;

int search(const vector<int>& A, int tar) {
    int st = 0, end = A.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (A[mid] == tar) {
            return mid;
        }

        // Check if the left half is sorted
        if (A[st] <= A[mid]) {
            if (A[st] <= tar && tar < A[mid]) {
                end = mid - 1; // Search in the left half
            } else {
                st = mid + 1; // Search in the right half
            }
        }
        // Otherwise, the right half is sorted
        else {
            if (A[mid] < tar && tar <= A[end]) {
                st = mid + 1; // Search in the right half
            } else {
                end = mid - 1; // Search in the left half
            }
        }
    }
    return -1; // Element not found
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    
    int result = search(arr, target);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
