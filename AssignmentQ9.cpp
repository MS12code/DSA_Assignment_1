#include <iostream>
#include <algorithm>

using namespace std;


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    
    cout << "Enter the first number (num1): ";
    cin >> num1;
    cout << "Enter the second number (num2): ";
    cin >> num2;

   
    int gcdResult = gcd(num1, num2);

   
    int lcmResult = (num1 * num2) / gcdResult;

   
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdResult << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmResult << endl;

    return 0;
}
