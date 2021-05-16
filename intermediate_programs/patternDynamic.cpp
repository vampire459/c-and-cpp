#include <iostream>

using namespace std;

int main(void) 
{
    int row, column, i, j;
    char symbol;

    cout  << "enter row: ";
    cin >> row;

    cout << "enter coloum: ";
    cin >> column;

    cout << "enter symbol: ";
    cin >> symbol;

    for ( i = 0; i < column; i++) // column
    {
        for ( j = 0; j < row; j++) // row
        {
            cout << " " << symbol << " ";
        }
        cout << "" << endl;
    }
    
    return 0;
}