#include <iostream>

using namespace std;

int main(void)
{
    cout << "If statement demo"<< endl << endl;
    int i;
    cout<< "enter any number: ";
    cin >> i;


    if (i%2 == 0)
    {
        cout << "Hello, even" << "[" <<i <<"]"<< endl;
    }
    else
    {
        cout << "Hello, odd"<< "[" <<i <<"]"<< endl;
    }
    
    return 0;
}