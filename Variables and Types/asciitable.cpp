#include <iostream>


int main(void)
{
    char character; 
    std::cout << "Enter any character:";
    std::cin >> character ;
    std::cout << "The ascii equivalent for the entered character is: " << int(character) << std::endl; 

}