#include <iostream>
#include <string>

using namespace std;

void primes(int n) {
    for (int i = 2; i <= n; i++) {
        bool is_prime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter a number : ";
    if (!(cin >> n) || n <= 1) {
        cout << "Invalid input";
        return 0;
    }
    cout << "The prime numbers till the given numbers are : ";
    primes(n);
    return 0;
}