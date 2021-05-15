//return_type function_name([ arg1_type arg1_name, ... ]) { code }  

#include <iostream>

using namespace std;

int max(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

int main()
{
    
    int a,b, num1,num2;

    cout<< "Enter a : ";
    cin>>num1;

    cout << "Emter b: ";
    cin>> num2;

    a = num1, b= num2;

    //calling above function to find max of 'a' and 'b'

    int m = max(a,b);
    cout << "max is " << m << endl;
    return 0;
}