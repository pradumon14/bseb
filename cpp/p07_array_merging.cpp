// p07_array_merging.cpp
// Merging two sorted arrays into a third sorted array
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7};
    int n1 = 4;
    int b[] = {2, 4, 6, 8, 10};
    int n2 = 5;
    int c[20]; // Result array
    
    int i = 0, j = 0, k = 0;

    // Compare and place smaller element into C
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }

    // Copy remaining elements from A (if any)
    while(i < n1) c[k++] = a[i++];

    // Copy remaining elements from B (if any)
    while(j < n2) c[k++] = b[j++];

    cout << "Merged Array: ";
    for(int x=0; x<k; x++) cout << c[x] << " ";
    cout << endl;

    return 0;
}
