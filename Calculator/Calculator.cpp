#include <iostream>

using namespace std;

int main()
{

    int number1, number2, result;
    char op;


    std::cout << "Welcome to the simple Calculator, enter two numbers right now!\n";
    std::cout << "Number 1: \n";
    std::cin >> number1;
    std::cout << "Number 2: \n";
    std::cin >> number2;
    std::cout << "Now enter one of the following: +, -, *, /!\n";
    std::cin >> op;


    if (op == '+') {

        result = number1 + number2;
        std::cout << "The Result is: \n" << result;

    }
    else if (op == '-') {

        result = number1 - number2;
        std::cout << "The Result is: \n" << result;

    }
    else if (op == '*') {

        result = number1 * number2;
        std::cout << "The Result is: \n" << result;

    }
    else if (op == '/') {

        result = number1 / number2;
        std::cout << "The Result is: \n" << result;

    }

















}

