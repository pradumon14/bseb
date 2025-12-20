// p14_stack_linkedlist.cpp
// Dynamic Stack implementation using Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class StackLL {
    Node* top;
public:
    StackLL() { top = nullptr; }

    void push(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = top; // Point to old top
        top = newNode;       // Update top
    }

    void pop() {
        if(!top) { cout << "Empty\n"; return; }
        Node* temp = top;
        cout << "Popped: " << temp->data << endl;
        top = top->next;
        delete temp;
    }
};

int main() {
    StackLL s;
    s.push(100); s.push(200);
    s.pop();
    return 0;
}
