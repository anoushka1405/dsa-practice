vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if (matrix.empty()) return ans;

    int top = 0;                          // starting row index
    int bottom = matrix.size() - 1;      // ending row index
    int left = 0;                         // starting column index
    int right = matrix[0].size() - 1;     // ending column index

    while (top <= bottom && left <= right) {
        // 1. Traverse top row from left to right
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++; // move top boundary down

        // 2. Traverse right column from top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--; // move right boundary left

        // 3. Traverse bottom row from right to left (only if top <= bottom)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--; // move bottom boundary up
        }

        // 4. Traverse left column from bottom to top (only if left <= right)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++; // move left boundary right
        }
    }

    return ans;
}
