// p01_array_sum_avg.cpp
// Program to calculate sum and average of array elements
#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0, avg;
    
    // Input size
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[100]; // Static allocation
    
    // Input elements and calculate sum simultaneously
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    avg = sum / n;
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    
    return 0;
}
