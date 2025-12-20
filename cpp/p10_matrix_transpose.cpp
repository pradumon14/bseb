// p10_matrix_transpose.cpp
// Find transpose of a matrix (swap rows and cols)
#include <iostream>
using namespace std;

int main() {
    int r=2, c=3;
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int T[3][2];

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose Matrix:\n";
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) cout << T[i][j] << " ";
        cout << endl;
    }
    return 0;
}
