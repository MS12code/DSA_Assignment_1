#include <iostream>

using namespace std;

int main() {
    int n;

   
    cout << "Enter a number (n): ";
    cin >> n;

    
    int originalNumber = n;

    
    int digitCount = 0;

    cout << "Digits in the number " << originalNumber << " are: ";

   
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }

   
    while (n != 0) {
        int digit = n % 10;
        cout << digit << " ";
        n /= 10;
        digitCount++;
    }

    cout << endl;
    cout << "Total number of digits: " << digitCount << endl;

    return 0;
}
