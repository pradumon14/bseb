// p08_matrix_addition.cpp
// Add two matrices
#include <iostream>
using namespace std;

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int Sum[2][2];

    cout << "Sum Matrix:\n";
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
