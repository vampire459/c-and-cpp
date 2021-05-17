#include <iostream>

using namespace std;

int main(void)
{
    int n0=0,n1=1,n2,limit;
    cout<< endl<< "Fibonacci" << endl;
    do
    {
        cout << "Enter limit: ";
        cin>> limit;
    } while (limit<=2);
    
    cout << n0 << endl;
    cout << n1 << endl;
    for (int i = 0; i < limit; i++)
    {
        n2=n1+n0;
        cout << n2 << endl;
        n0=n1;
        n1=n2;
    }
     
}