#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main()
{
    cout << "Hello, world!" << endl;
    cout << "applications: Modify the passed parameters in a function: If a function receives a reference to a variable, it can modify the value of the variable. For example, the following program variables are swapped using references." << endl;

    int a, b;
    cout << "enter a:";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    cout << "before swap\n";

    cout << "a: " << a << " and "
         << " b: " << b << endl;

    swap(a, b);
    cout << "after swap\n";
    cout << "a: " << a << " and "
         << " b: " << b << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}