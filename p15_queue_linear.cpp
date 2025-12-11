// p15_queue_linear.cpp
// FIFO Queue using Array
#include <iostream>
#define MAX 5
using namespace std;

class Queue {
    int front, rear;
    int arr[MAX];
public:
    Queue() { front = -1; rear = -1; }

    void enqueue(int x) {
        if(rear == MAX-1) { cout << "Full\n"; return; }
        if(front == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue() {
        if(front == -1 || front > rear) { cout << "Empty\n"; return; }
        cout << "Dequeued: " << arr[front++] << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(1); q.enqueue(2);
    q.dequeue();
    return 0;
}
