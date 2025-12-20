// p04_array_linear_search.cpp
// Basic Linear Search implementation
#include <iostream>
using namespace std;

int main() {
    int arr[] = {15, 23, 4, 8, 50};
    int n = 5, key, i;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> key;

    // Iterate through every element
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found) 
        cout << "Element found at index " << i << endl;
    else 
        cout << "Element not found." << endl;

    return 0;
}
