#include <iostream>

using namespace std;

// funtion prototyping

void greet(string nameUser);

int main()
{
    greet("some random name");
    greet("aryan singh");
}

void greet(string nameUser)
{
    cout << "Hello, " << nameUser << endl;
}