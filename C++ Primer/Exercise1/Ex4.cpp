/*
Exercise 1.4: Our program used the addition operator, +, to add two numbers. Write
a program that uses the multiplication operator, *, to print the product instead.
*/
#include <iostream>

int main(int argc, char const *argv[])
{
    int firstNumber, secondNumber;

    std::cout << "Enter two numbers: ";
    std::cin >> firstNumber >> secondNumber;
    std::cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber 
    << std::endl;
    return 0;
}
