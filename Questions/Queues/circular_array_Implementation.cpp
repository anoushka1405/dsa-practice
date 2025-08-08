
/*
  Why use a Circular Array for Queues?

  - A normal queue using an array wastes space once elements are dequeued from the front,
    because the front index moves forward, leaving unused space at the start.
  - To efficiently use the array space, a circular queue treats the array as if it loops back
    from the end to the beginning.
  - This way, when rear reaches the end of the array, it wraps around to the start if there is
    free space, making full use of the allocated array.
*/

class CircularQueue {
private:
    int *arr;      // pointer to the array that holds the queue elements
    int size;      // maximum capacity of the queue
    int front;     // index of the front element
    int rear;      // index just after the last element (where next element will be inserted)
    int count;     // current number of elements in the queue

public:
    CircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = 0;
        rear = 0;
        count = 0;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    // Enqueue operation - add element at the rear
    bool enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full, cannot enqueue " << value << "\n";
            return false;
        }
        arr[rear] = value;
        // Move rear forward circularly
        rear = (rear + 1) % size;
        count++;
        return true;
    }

    // Dequeue operation - remove element from the front
    bool dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue\n";
            return false;
        }
        // Move front forward circularly
        front = (front + 1) % size;
        count--;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    int Rear() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        // rear points to next free spot, so rear-1 is last element
        return arr[(rear - 1 + size) % size];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }
};
