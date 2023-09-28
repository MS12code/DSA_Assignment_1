#include <iostream>

using namespace std;

int main() {
    int n;

   
    cout << "Enter a number following the constraints: ";
    cin >> n;

    int inverse = 0;
    int position = 1;

    while (n != 0) {
        int digit = n % 10;
        inverse += position * digit;
        n /= 10;
        position *= 10;
    }

    cout << "Inverse of the number is: " << inverse << endl;

    return 0;
}
