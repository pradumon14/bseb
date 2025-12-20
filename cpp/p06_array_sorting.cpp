// p06_array_sorting.cpp
// Implementation of Bubble Sort
#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    // Bubble Sort Logic
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
