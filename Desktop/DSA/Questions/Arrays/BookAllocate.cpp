#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int mostAllowedPages) {
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mostAllowedPages) {
            return false;
        }
        if (pages + arr[i] <= mostAllowedPages) {
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }
    return students <= m;
}

int allocateBooks(vector<int>& arr, int n, int m) {
    if (m > n) return -1;  // If students are more than books, return -1

    int sum = 0, maxPages = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxPages = max(maxPages, arr[i]);
    }

    int st = maxPages, end = sum, ans = -1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> books = {10, 20, 30, 40}; // Example book pages
    int students = 2;
    cout << "Minimum maximum pages: " << allocateBooks(books, books.size(), students) << endl;
    return 0;
}
