#include <iostream>

using namespace std;

int main(void)
{
    cout << "switch statement demo"<< endl << endl;
    int i; 
    char t;
    cout<< "enter any number: ";
    cin >> i;
    t = i%2;

    switch (t)
    {
    case 0:
        cout<< "Even number!" << endl << endl;
        break;
    
    case !0:
        cout<< "Odd number!" << endl << endl;
        break;
    
    default:
        cout<< "why?" << endl << endl;
        break;
    }
    
    return 0;
}