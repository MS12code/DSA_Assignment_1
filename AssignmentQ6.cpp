#include <iostream>

using namespace std;

int main() {
    int n;

    
    cout << "Enter a number (n): ";
    cin >> n;

    cout << "Digits in reverse order: " << endl;

   
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }

  
    while (n != 0) {
        int digit = n % 10;
        cout << digit << endl;
        n /= 10;
    }

    return 0;
}
