/*
Shunting Yard Algorithm Explanation:
- Designed by Edsger Dijkstra to convert infix expressions (like "a + b * c")
  into postfix notation (like "abc*+"), which is easier for computers to evaluate.
- Uses a stack to temporarily hold operators and parentheses.
- Operands (variables or numbers) are sent directly to the output.
- Operators are pushed to the stack but may pop others off based on precedence and associativity.
- Parentheses control grouping: '(' is pushed to stack; ')' causes pop until '('.
*/

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;          // Highest precedence
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;                        // Non-operator characters
}

// Function to check if operator is left-associative
bool isLeftAssociative(char op) {
    // '^' is right-associative; others are left-associative
    return (op != '^');
}

// Main function to convert infix expression to postfix
string infixToPostfix(string s) {
    stack<char> st;      // Stack to hold operators and parentheses
    string result;       // Output string for postfix expression

    for (char c : s) {
        if (isalnum(c)) {
            // If character is operand (letter or digit), add to output
            result += c;
        }
        else if (c == '(') {
            // Push '(' to stack to mark start of a group
            st.push(c);
        }
        else if (c == ')') {
            // Pop operators from stack to output until '(' is found
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty() && st.top() == '(') {
                st.pop();  // Remove '(' from stack
            }
        }
        else {
            // Operator encountered
            // Pop operators with higher or equal precedence (if left-associative)
            while (!st.empty() && st.top() != '(' &&
                   (precedence(st.top()) > precedence(c) ||
                    (precedence(st.top()) == precedence(c) && isLeftAssociative(c)))) {
                result += st.top();
                st.pop();
            }
            // Push current operator onto stack
            st.push(c);
        }
    }

    // Pop any remaining operators from stack to output
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}
