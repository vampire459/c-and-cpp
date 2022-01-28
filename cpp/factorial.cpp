#include <iostream>

using namespace std;

int main()
{
    int n, i;

    cout << "Enter number ";
    cin >> n;

    cout << "This program will output " << n << "!" << endl;

    int factorial=1;

    for ( i = 1; i <= n; i++)
    {
        factorial = factorial*i;
    }
    
    cout << factorial << endl;
    return 0;
}