// p21_polynomial_addition.cpp
/*
 * Program: Polynomial Addition
 * Description: Adds two polynomials represented by arrays of terms.
 */
#include <iostream>
using namespace std;

struct Term {
    int coeff;
    int exp;
};

int main() {
    // Poly 1: 5x^2 + 4x^1
    Term p1[] = {{5, 2}, {4, 1}};
    int n1 = 2;

    // Poly 2: 3x^2 + 2x^0
    Term p2[] = {{3, 2}, {2, 0}};
    int n2 = 2;

    Term sum[10];
    int i = 0, j = 0, k = 0;

    // Merge logic based on exponents (High to Low)
    while (i < n1 && j < n2) {
        if (p1[i].exp == p2[j].exp) {
            // Same exponent: add coefficients
            sum[k].exp = p1[i].exp;
            sum[k].coeff = p1[i].coeff + p2[j].coeff;
            i++; j++; k++;
        } else if (p1[i].exp > p2[j].exp) {
            // Higher exponent comes first
            sum[k++] = p1[i++];
        } else {
            sum[k++] = p2[j++];
        }
    }

    // Copy remaining terms
    while(i < n1) sum[k++] = p1[i++];
    while(j < n2) sum[k++] = p2[j++];

    // Display
    cout << "Result Polynomial: ";
    for(int x = 0; x < k; x++) {
        cout << sum[x].coeff << "x^" << sum[x].exp;
        if(x < k-1) cout << " + ";
    }
    cout << endl;

    return 0;
}
