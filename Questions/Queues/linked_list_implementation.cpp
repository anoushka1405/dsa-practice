class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    // Add element at the rear
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (!rear) {  // Queue is empty
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    // Remove element from front
    int dequeue() {
        if (!front) {
            throw std::runtime_error("Queue is empty");
        }
        int val = front->data;
        Node* temp = front;
        front = front->next;
        if (!front) {  // Queue became empty
            rear = nullptr;
        }
        delete temp;
        return val;
    }

    // Get the front element
    int peek() {
        if (!front) {
            throw std::runtime_error("Queue is empty");
        }
        return front->data;
    }

    // Check if queue is empty
    bool empty() {
        return front == nullptr;
    }
};
