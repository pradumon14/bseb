// p20_prime_sieve.cpp
/*
 * Program: Sieve of Eratosthenes
 * Description: Efficiently finds all prime numbers up to a limit N.
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter upper limit (n): ";
    cin >> n;

    // Boolean vector initialized to true (assuming all are prime initially)
    vector<bool> isPrime(n + 1, true);

    // 0 and 1 are not prime
    isPrime[0] = isPrime[1] = false;

    // Start checking from 2
    for (int p = 2; p * p <= n; p++) {
        // If p is not changed, then it is a prime
        if (isPrime[p]) {
            // Update all multiples of p to false (not prime)
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

    cout << "Prime numbers up to " << n << ": ";
    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) cout << p << " ";
    }
    cout << endl;

    return 0;
}
