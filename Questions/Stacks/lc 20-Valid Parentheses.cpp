bool isValid(string s) {
    stack<char> st;

    // Map to store matching pairs of brackets
    unordered_map<char, char> matching = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    // Traverse each character in the string
    for (char ch : s) {
        // If it's an opening bracket, push to stack
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } 
        // If it's a closing bracket
        else {
            // If stack is empty, there's no matching opening
            if (st.empty()) return false;

            // If the top of the stack doesn't match the current closing bracket
            if (st.top() != matching[ch]) return false;

            // If matched, pop the opening bracket from the stack
            st.pop();
        }
    }

    // If the stack is empty, all brackets were matched correctly
    return st.empty();
}
