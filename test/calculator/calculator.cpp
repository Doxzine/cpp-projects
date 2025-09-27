#include <iostream>

int main    () {
    double num1;
    double num2;
    double result;
    std::string op;


    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    std::cout << "What operator? (+, -, /, *): ";
    std::cin >> op;

    if (op == "+") {
        result = (num1+num2);
    }
    else if (op == "-") {
        result = (num1-num2);
    }
    else if (op == "*") {
        result = (num1*num2);
    }
    else if (op == "/") {
        result = (num1/num2);
    }
    std::cout << "Your number is, " << result << "!";
}