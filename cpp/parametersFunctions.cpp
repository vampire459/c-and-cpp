#include <iostream>

using namespace std;

// funtion prototyping

void greet(string nameUser);

int main()
{
    string name;
    cout << "Enter name: ";
    cin >> name;
    cout << endl;
    greet(name);
}

void greet(string nameUser)
{
    cout << "Hello, " << nameUser << endl;
}