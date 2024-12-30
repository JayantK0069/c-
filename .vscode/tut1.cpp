#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw a("Division by zero is not allowed!"); // Throw an exception
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num, denom;

    cout << "Enter numerator: ";
    cin >> num;

    cout << "Enter denominator: ";
    cin >> denom;

    try {
        double result = divide(num, denom); // Call the function
        cout << "Result: " << result << endl;
    } catch (const a& e) { // Catch the exception
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}