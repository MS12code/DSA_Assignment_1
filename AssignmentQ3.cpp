#include <iostream>

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

int main() {
    int t, n;

    
    cout << "Enter the number of test cases (t): ";
    cin >> t;

    for (int i = 0; i < t; ++i) {
        
        cout << "Enter a number (n): ";
        cin >> n;

        if (isPrime(n)) {
            cout << "prime" << endl;
        } else {
            cout << "not prime" << endl;
        }
    }

    return 0;
}
