// p13_stack_array.cpp
// LIFO Stack implementation using static array
#include <iostream>
#define MAX 5
using namespace std;

class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }

    void push(int x) {
        if(top >= MAX-1) cout << "Overflow\n";
        else arr[++top] = x;
    }

    void pop() {
        if(top < 0) cout << "Underflow\n";
        else cout << "Popped: " << arr[top--] << endl;
    }

    void display() {
        cout << "Stack: ";
        for(int i=top; i>=0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10); s.push(20);
    s.display();
    s.pop();
    s.display();
    return 0;
}
