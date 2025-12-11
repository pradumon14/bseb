// p17_queue_linkedlist.cpp
// Dynamic Queue using Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class QueueLL {
    Node *front, *rear;
public:
    QueueLL() { front = rear = nullptr; }

    void enqueue(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = nullptr;
        
        if(rear == nullptr) { front = rear = temp; return; }
        
        rear->next = temp;
        rear = temp;
    }

    void dequeue() {
        if(front == nullptr) return;
        Node* temp = front;
        front = front->next;
        if(front == nullptr) rear = nullptr;
        
        cout << "Dequeued: " << temp->data << endl;
        delete temp;
    }
};

int main() {
    QueueLL q;
    q.enqueue(5); q.enqueue(10);
    q.dequeue();
    return 0;
}
