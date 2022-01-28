#include <iostream>

using namespace std;

int main(void)
{
    int height , width;
    char character='%';

    cout << "enter the height of the triangle: ";
    cin >> height;

    cout << "enter the width of the column: ";
    cin >> width;

    cout << "enter symbol: ";
    cin >> character;

    for (int i = 1; i <= height; i++)
    {
      for ( int j = 1; j <= i; j++)
      {
        cout << character;
      }
      cout << endl;
    }
    return 0;
}