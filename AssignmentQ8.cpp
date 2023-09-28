#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, k;

    cout << "Enter a number (n): ";
    cin >> n;
    cout << "Enter the rotation count (k): ";
    cin >> k;

   
    int numDigits = log10(n) + 1;

    
    int effectiveRotations = k % numDigits;

   
    if (effectiveRotations < 0) {
        effectiveRotations += numDigits;
    }

    
    long long multiplier = pow(10, effectiveRotations);
    long long rotatedNumber = n % multiplier * pow(10, numDigits - effectiveRotations) + n / multiplier;

   
    cout << "Rotated number is: " << rotatedNumber << endl;

    return 0;
}
