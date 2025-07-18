#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& heights) {
    int n = heights.size();
    int lp = 0, rp = n - 1, ans = 0;

    while (lp < rp) {
        int w = rp - lp; // Width of the container
        int h = min(heights[lp], heights[rp]); // Min height
        int currWater = w * h; // Current water area
        ans = max(currWater, ans); // Update max area
        
        // Move the pointer at the smaller height
        if (heights[lp] < heights[rp]) {
            lp++;
        } else {
            rp--;
        }
    }
    
    return ans;
}

int main() {
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum Water Area: " << maxArea(heights) << endl;
    return 0;
}
