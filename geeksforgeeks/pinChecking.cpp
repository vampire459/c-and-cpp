#include <iostream>

using namespace std;

int main()
{
    int userPin= 4890, pin, counter=0;


    do
    {
        
        cout << "Enter pin: ";
        cin>> pin;
        counter++;
    } while (userPin != pin && counter <3);


    if (userPin == pin && counter >=3)
    {
        cout << "enter\n";
    }
    else
    {
        cout << "no enter\n";
    }
    return 0;
}
    
    
