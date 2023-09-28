#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}


void primeFactorization(int n) {
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            if (isPrime(i)) {
                cout << i << " ";
            }
            n /= i;
        }
    }
}

int main() {
    int n;

    
    cout << "Enter a number (n): ";
    cin >> n;

    cout << "Prime factorization of " << n << " is: ";
    primeFactorization(n);
    cout << endl;

    return 0;
}
