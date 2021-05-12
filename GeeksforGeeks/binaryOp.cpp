#include <iostream>

using namespace std;

int main(void)
{
    int n,m;

    cout <<"Input a number: ";
    cin >> n;
    cout <<"Input a number: ";
    cin >> m;

    cout <<"Add: "<< n+m << endl;
    cout <<"Subtract: "<< n-m << endl;
    cout <<"Multiply: "<< n*m << endl;
    cout <<"divide: "<< n/m << endl;
    cout <<"Quotient: " << n/m << endl;

    if (n>m)
    {
        cout <<"Remainder: "<< n%m << endl;

    }
    else
    {
        cout <<"Remainder: "<< m%n << endl;
    }
    
}