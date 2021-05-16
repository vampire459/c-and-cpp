#include <iostream>

using namespace std;

int main(void)
{
    int num1,num2;

    cout<< "Enter two numbers" << endl;
    cout<< "Enter First number: ";
    cin>> num1;
    cout<< "Enter Second number: ";
    cin>> num2;

    if (num1>num2)
    {
        cout<< num1<<" is greater"<< endl;
    }
    else
        cout<< num2<<" is greater"<< endl;
    
    return 0;
}