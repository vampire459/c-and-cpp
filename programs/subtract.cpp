#include <iostream>

int main(void)
{
    int num1, num2, result;
    std::cout << "Enter a number:";
    std::cin >> num1;
    std::cout << "Enter a number:";
    std::cin >> num2;
    result = num1 - num2;
    std::cout << "Results: " << result << std::endl;
}