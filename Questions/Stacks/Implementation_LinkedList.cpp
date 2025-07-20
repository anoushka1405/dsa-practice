#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Stack class using Linked List
class Stack {
private:
    Node* topNode;  // Pointer to the top of the stack

public:
    // Constructor
    Stack() {
        topNode = nullptr;
    }

    // Push a new element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);  // Create a new node
        newNode->next = topNode;          // Link the new node to the current top
        topNode = newNode;                // Update the top to the new node
    }

    // Pop the top element from the stack
    void pop() {
        if (topNode == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = topNode;             // Temporarily store current top
        topNode = topNode->next;          // Move top to next element
        delete temp;                      // Delete old top node
    }

    // Return the top element of the stack
    int top() {
        if (topNode == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return topNode->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return topNode == nullptr;
    }

    // Destructor to clean up memory
    ~Stack() {
        while (topNode != nullptr) {
            pop();  // Repeatedly pop to delete all nodes
        }
    }
};

// Example usage
int main() {
    Stack st;

    st.push(100);
    st.push(200);
    st.push(300);

    cout << "Top element: " << st.top() << endl;  // Should print 300

    st.pop();
    cout << "Top element after pop: " << st.top() << endl;  // Should print 200

    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
