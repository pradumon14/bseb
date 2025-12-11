// p22_sparse_matrix.cpp
/*
 * Program: Sparse Matrix Representation
 * Description: Converts a 2D matrix into a compact "Triplet" format (Row, Col, Value)
 *              to save space when most elements are zero.
 */
#include <iostream>
using namespace std;

int main() {
    // 4x5 Matrix with mostly zeros
    int matrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    // Array to store non-zero elements (Row, Col, Value)
    // Max size estimate: 20
    int compact[20][3]; 
    int k = 0; // Counter for non-zero elements

    // Scan the matrix
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            if(matrix[i][j] != 0) {
                compact[k][0] = i;        // Store Row index
                compact[k][1] = j;        // Store Column index
                compact[k][2] = matrix[i][j]; // Store Value
                k++;
            }
        }
    }

    // Display Compact Representation
    cout << "Sparse Matrix Triplet (Row, Col, Value):" << endl;
    for(int i = 0; i < k; i++) {
        cout << compact[i][0] << "\t" 
             << compact[i][1] << "\t" 
             << compact[i][2] << endl;
    }

    return 0;
}
