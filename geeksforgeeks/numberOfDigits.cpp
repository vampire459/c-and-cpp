#include <iostream>

using namespace std;

int main()
{
    int number;
        cout << "Enter number: ";
        cin >> number;
    
    if (number == 0)
    {
        cout << "You have entered zero!" << endl;
    }
    else
    {
        int counter=0;
        while (number >0)
        {
            number = number/10;
            counter++;
        }    
        cout << "The number of digits in the number entered " << counter << endl;
    }

    return 0;
}