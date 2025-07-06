#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int number1, number2;
    char op;

    cout << "Welcome to the simple Calculator, enter two numbers right now!\n";

    cout << "Number 1: \n";
    while (!(cin >> number1)) {
        cout << "Invalid input. Please enter an integer for Number 1: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Number 2: \n";
    while (!(cin >> number2)) {
        cout << "Invalid input. Please enter an integer for Number 2: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Now enter one of the following: +, -, *, /!\n";
    cin >> op;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

    if (op == '+') {
        cout << "The Result is: \n" << (number1 + number2) << endl;
    }
    else if (op == '-') {
        cout << "The Result is: \n" << (number1 - number2) << endl;
    }
    else if (op == '*') {
        cout << "The Result is: \n" << (number1 * number2) << endl;
    }
    else if (op == '/') {
        if (number2 == 0) {
            cout << "Error: Division by zero is not allowed.\n";
        } else {
            cout << "The Result is: \n" << (static_cast<double>(number1) / number2) << endl;
        }
    }
    else {
        cout << "Error: Invalid operator entered.\n";
    }
}

