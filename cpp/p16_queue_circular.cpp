// p16_queue_circular.cpp
// Circular Queue to utilize empty spaces
#include <iostream>
#define MAX 3
using namespace std;

class CircularQueue {
    int front, rear, arr[MAX];
public:
    CircularQueue() { front = -1; rear = -1; }

    void enqueue(int x) {
        if((rear + 1) % MAX == front) { cout << "Full\n"; return; }
        if(front == -1) front = 0;
        rear = (rear + 1) % MAX;
        arr[rear] = x;
    }

    void dequeue() {
        if(front == -1) { cout << "Empty\n"; return; }
        cout << "Dequeued: " << arr[front] << endl;
        if(front == rear) front = rear = -1; // Queue becomes empty
        else front = (front + 1) % MAX;
    }
};

int main() {
    CircularQueue q;
    q.enqueue(10); q.enqueue(20); q.enqueue(30);
    q.dequeue(); // Removes 10
    q.enqueue(40); // Successfully wraps around
    return 0;
}

