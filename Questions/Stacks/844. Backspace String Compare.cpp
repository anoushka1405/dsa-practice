//Using string as stack
bool backspaceCompare(string s, string t) {
    string res1 = "", res2 = "";

    // Process first string
    for (char ch : s) {
        if (ch == '#') {
            // If there's a character to delete, remove it
            if (!res1.empty()) res1.pop_back();
        } else {
            // Otherwise, add character to the result
            res1.push_back(ch);
        }
    }

    // Process second string
    for (char ch : t) {
        if (ch == '#') {
            if (!res2.empty()) res2.pop_back();
        } else {
            res2.push_back(ch);
        }
    }

    // Return whether the processed strings are equal
    return res1 == res2;
}



//Using two pointer appraoch (optimal)
    bool backspaceCompare(string s, string t) {
    int i = s.size() - 1, j = t.size() - 1;
    int skipS = 0, skipT = 0;

    while (i >= 0 || j >= 0) {
        // Move i to next valid char in s
        while (i >= 0) {
            if (s[i] == '#') { skipS++; i--; }
            else if (skipS > 0) { skipS--; i--; }
            else break;
        }

        // Move j to next valid char in t
        while (j >= 0) {
            if (t[j] == '#') { skipT++; j--; }
            else if (skipT > 0) { skipT--; j--; }
            else break;
        }

        // Compare characters
        if (i >= 0 && j >= 0 && s[i] != t[j]) return false;
        if ((i >= 0) != (j >= 0)) return false;

        i--; j--;
    }

    return true;
    }
