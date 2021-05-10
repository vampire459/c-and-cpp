#include <iostream>

int main(void)
{
    std::cout << "Make addition of two numbers" << std::endl;
    int num1,num2,result;
    std::cout << "enter num1:";   
    std::cin >> num1;
    std::cout << "enter num2:";   
    std::cin >> num2;
    result = num1 + num2;
    std::cout << "The result is:" << result << std::endl;   
}