// p02_array_insertion.cpp
// Program to insert an element at a specific position
#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5; // Current size
    int pos, elem;

    cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter element: ";
    cin >> elem;

    // Shift elements to the right from the end
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = elem; // Insert value
    n++; // Increment size

    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

