/*
When a variable is declared as a reference,
it becomes an alternative name for an existing
variable. 
A variable can be declared as a reference by
putting ‘&’ in the declaration 
*/

#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int& ref = x;

    // if we change the value of x

    x = 69;

    cout << "x: " << x << " and  ref: " << ref << endl;

    // if we change the value again

    x = 420;

    cout << "x: " << x << " and  ref: " << ref << endl;

}