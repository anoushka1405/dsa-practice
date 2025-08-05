string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows)
            return s;

        vector<string> rows(numRows); // Vector to hold each row
        int currentRow = 0;
        bool goingDown = false; // Direction flag

        for (char c : s) {
            rows[currentRow] += c;

            // Change direction at top or bottom
            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown;

            // Move up or down accordingly
            currentRow += goingDown ? 1 : -1;
        }

        // Combine all rows into the final result
        string result;
        for (string& row : rows) {
            result += row;
        }

        return result;
    }
