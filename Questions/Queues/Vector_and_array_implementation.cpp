//using vectors
class QueueVector {
private:
    std::vector<int> data;
    int frontIndex; // index of front element

public:
    QueueVector() : frontIndex(0) {}

    // Add element at the rear
    void enqueue(int val) {
        data.push_back(val);
    }

    // Remove element from front
    int dequeue() {
        if (empty()) {
            throw std::runtime_error("Queue is empty");
        }
        int val = data[frontIndex];
        frontIndex++;

    // Get front element
    int peek() {
        if (empty()) {
            throw std::runtime_error("Queue is empty");
        }
        return data[frontIndex];
    }

    // Check if empty
    bool empty() {
        return frontIndex >= (int)data.size();
    }
};

//using fixed arrays

class QueueArray {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;

public:
    QueueArray(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    ~QueueArray() {
        delete[] arr;
    }

    // Add element at rear
    void enqueue(int val) {
        if (size == capacity) {
            throw std::runtime_error("Queue is full");
        }
        rear = (rear + 1) % capacity;
        arr[rear] = val;
        size++;
    }

    // Remove element from front
    int dequeue() {
        if (empty()) {
            throw std::runtime_error("Queue is empty");
        }
        int val = arr[front];
        front = (front + 1) % capacity;
        size--;
        return val;
    }

    // Get front element
    int peek() {
        if (empty()) {
            throw std::runtime_error("Queue is empty");
        }
        return arr[front];
    }

    // Check if empty
    bool empty() {
        return size == 0;
    }
};
