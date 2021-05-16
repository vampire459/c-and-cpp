#include <iostream>

using namespace std;

void primeNum(int number);

int main()
{
    int num;

    cout  << "enter number: ";
    cin >> num;

    primeNum(num);
}

void primeNum(int number)
{
    cout << "Is it a prime number?" << endl;

    bool isPrimeNumber = true;

    for (int i = 2 ; i < number; i++)
    {
        if (number%i == 0)
        {
            isPrimeNumber = false;
            break;
        }
    }

    if(isPrimeNumber)
        cout << "yes prime number\n"; 
    else
    {
        cout << "not prime number\n"; 
    }
}