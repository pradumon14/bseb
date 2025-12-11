// p05_array_binary_search.cpp
// Binary Search (Array must be sorted)
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38}; // Sorted array
    int n = 7, key;
    
    cout << "Enter number to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            found = true;
            break;
        }

        if (arr[mid] < key)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }

    if (!found) cout << "Not found." << endl;

    return 0;
}
