// p03_array_deletion.cpp
// Program to delete an element from a specific position
#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos;

    cout << "Enter index to delete (0 to " << n-1 << "): ";
    cin >> pos;

    if(pos < 0 || pos >= n) {
        cout << "Invalid position.\n";
    } else {
        // Shift elements to the left
        for(int i = pos; i < n - 1; i++) {
            arr[i] = arr[i+1];
        }
        n--; // Decrease size

        cout << "Array after deletion: ";
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
