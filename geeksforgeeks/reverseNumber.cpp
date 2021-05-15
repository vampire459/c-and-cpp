#include <iostream>

using namespace std;
int main()
{
    int number, reversedNumber=0;
    cout << "enter number to be reverserd: "; 
    cin>> number;


    while (number!=0)
    {
        reversedNumber *=10;
        int temp = number % 10;
        reversedNumber += temp;
        number /= 10;
    }

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
    
} 