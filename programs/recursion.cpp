#include <iostream>

using namespace std;


int recursivefn(int m, int n)
{
    //TODO sum between numbers M and N;


  // Base case: to break 

    if (m == n)
        return m;
    return m+ recursivefn(m+1, n);    

}

int loopfn(int m, int n)
{
    //TODO sum between numbers M and N;


    int sum = 0;

    for (int i = m; i <= n; i++)
    {
        sum = i+sum;
    }
    
    cout << sum << " is the sum!" << endl;

    return 0;

}

// main

int main()
{

    cout << "with loop" << endl;

    cout<< loopfn(0,3) << endl;

    cout << "with recursion" << endl;

    cout <<recursivefn(0,3) << endl;
}