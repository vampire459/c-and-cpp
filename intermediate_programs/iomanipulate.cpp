#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int length = 2;
    char symbol ='#';
    bool isit = true;

    while (isit)
    {
       cout << setw(2) << symbol;
    }
    
}