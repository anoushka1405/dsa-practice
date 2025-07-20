#include <iostream>
using namespace std;

#define MAX_SIZE 100  // Define maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];  // Array to hold stack elements
    int topIndex;       // Index of the top element in the stack

public:
    // Constructor
    Stack() {
        topIndex = -1;  // Stack is initially empty
    }

    // Push an element onto the stack
    void push(int value) {
        if (topIndex >= MAX_SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        topIndex++;
        arr[topIndex] = value;
    }

    // Pop the top element from the stack
    void pop() {
        if (topIndex < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        topIndex--;
    }

    // Return the top element of the stack
    int top() {
        if (topIndex < 0) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    // Check if the stack is empty
    bool isEmpty() {
        return topIndex < 0;
    }

    // Check if the stack is full
    bool isFull() {
        return topIndex >= MAX_SIZE - 1;
    }

    // Return the current size of the stack
    int size() {
        return topIndex + 1;
    }
};

// Example usage
int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;  // Should print 30

    st.pop();
    cout << "Top element after pop: " << st.top() << endl;  // Should print 20

    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl;
    cout << "Stack size: " << st.size() << endl;

    return 0;
}
