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
    int low, high;

   
    cout << "Enter the lower limit: ";
    cin >> low;
    cout << "Enter the upper limit: ";
    cin >> high;

    cout << "Prime numbers between " << low << " and " << high << " are:" << endl;

    for (int i = low; i <= high; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
