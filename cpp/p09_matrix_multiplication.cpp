// p09_matrix_multiplication.cpp
// Multiply two matrices (Row by Column)
#include <iostream>
using namespace std;

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{1, 0}, {0, 1}}; // Identity matrix
    int Res[2][2] = {0}; // Initialize to 0

    for(int i=0; i<2; i++) {     // Rows of A
        for(int j=0; j<2; j++) { // Cols of B
            for(int k=0; k<2; k++) { 
                Res[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Product Matrix:\n";
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) cout << Res[i][j] << " ";
        cout << endl;
    }
    return 0;
}
