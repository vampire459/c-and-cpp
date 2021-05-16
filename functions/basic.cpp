#include <iostream>
//return_type function_name([ arg1_type arg1_name, ... ]) { code }  

using namespace std;

int max(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

int min(int x, int y)
{
    if (x>y)
    
        return y;
    else
        return x;
    
}

string hello(string name)
{
    cout << "hello, " << name << endl;
}

int main()
{
    
    int a,b, num1,num2;

    cout<< "Enter a : ";
    cin>>num1;

    cout << "Emter b: ";
    cin>> num2;

    a = num1, b= num2;

    //calling above function

    string userName = "Aryan";

    string greet = hello(userName);
    cout << greet << endl;

    int m = max(a,b);
    cout << "max is " << m << endl;

    int m = min(a,b);
    cout << "min is " << m << endl;

    return 0;
}