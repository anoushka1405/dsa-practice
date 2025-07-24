// Function to compute the transpose of a 2D matrix
void transpose(vector<vector<int>>& mat) {
    int n = mat.size();        // Number of rows in original matrix
    int m = mat[0].size();     // Number of columns in original matrix

    // Create a new matrix 'res' with dimensions m x n
    // (rows become columns and columns become rows)
    vector<vector<int>> res(m, vector<int>(n)); 

    // Loop through each element of the original matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            res[j][i] = mat[i][j]; // Assign transposed value
        }
    }

    mat = res; // Update the original matrix with the transposed one (not in-place)
}
