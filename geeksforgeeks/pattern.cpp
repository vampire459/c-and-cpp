#include <iostream>

using namespace std;

int main(void) 
{
    int row, column, i, j;

    cout  << "enter row: ";
    cin >> row;

    cout << "enter coloum: ";
    cin>> column;

    for ( i = 0; i < column; i++) // column
    {
        for ( j = 0; j < row; j++) // row
        {
            cout << " * " ;
        }
        cout << "" << endl;
    }
    
    return 0;
}