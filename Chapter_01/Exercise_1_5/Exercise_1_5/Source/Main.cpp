#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;

    int num1 = 0;
    int num2 = 0;

    std::cin >> num1 >> num2;

    std::cout << "The product of ";
    std::cout << num1;
    std::cout << " and ";
    std::cout << num2;
    std::cout << " is: ";
    std::cout << (num1 * num2);
    std::cout << std::endl;

    return 0;
}