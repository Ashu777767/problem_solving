#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    // Ask the user for a number
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    // Check if the number is negative, factorial is not defined for negative numbers
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // Output the result
        cout << "Factorial of " << num << " is " << factorial << endl;
    }

    return 0;
}


