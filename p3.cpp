#include <iostream>
using namespace std;

int main() {
    // Declare two variables to store input numbers
    double num1, num2, sum;

    // Ask the user for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Add the numbers
    sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}

