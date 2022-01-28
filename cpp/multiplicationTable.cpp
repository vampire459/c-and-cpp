#include<iostream> 

using namespace std;

int main(void)
{
    int tableLimit;

    cout << "enter the table limit: ";
    cin >> tableLimit; 

    for ( int i = 1; i <= tableLimit ; i++)
    { 
        for ( int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << "=" << j << endl;
        }
        cout << " " << endl;
        cout << "table of: " << i <<"\n";
        cout << " " << endl;
    }
}