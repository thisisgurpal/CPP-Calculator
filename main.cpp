#include <iostream>
#include <limits>  // for numeric_limits
#include <string>

using namespace std;

int main()
{
    // define variables
    string operation;
    double number1, number2;

    // Get user input for the first number
    cout << "Enter First Number: ";
    cin >> number1;
    while (!(number1)) {
        cout << "Error: Invalid input. Please enter a numeric value: ";
        cin.clear();  // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // discard invalid input
        cin >> number1;
    }

    // Get user input for the operation
    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;
    while (operation != "+" && operation != "-" && operation != "*" && operation != "/") {
        cout << "Error: Not a recognised operation. Please enter one of +, -, *, /: ";
        cin >> operation;
    }

    // Get user input for the second number
    cout << "Enter Second Number: ";
    cin >> number2;
    while (!(number2)) {
        cout << "Error: Invalid input. Please enter a numeric value: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> number2;
    }

    // Perform the operation and handle division by zero
    if (operation == "+") {
        cout << "Result: " << number1 + number2 << endl;
    } else if (operation == "-") {
        cout << "Result: " << number1 - number2 << endl;
    } else if (operation == "*") {
        cout << "Result: " << number1 * number2 << endl;
    } else if (operation == "/") {
        if (number2 != 0) {
            cout << "Result: " << number1 / number2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }

    return 0;
}
