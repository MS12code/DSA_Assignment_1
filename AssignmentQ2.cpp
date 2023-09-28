#include <iostream>
using namespace std;

int main() {
    int marks;
 // Input marks
   cout << "Enter the student's marks: ";
   cin >> marks;

   
    if (marks > 90) {
       cout << "Excellent" <<endl;
    } else if (marks > 80) {
        cout << "Good" << endl;
    } else if (marks > 70) {
        cout << "Fair" << endl;
    } else if (marks > 60) {
       cout << "Meets expectations" << endl;
    } else {
        cout << "Below par" << endl;
    }

    return 0;
}
