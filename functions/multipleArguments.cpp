#include <iostream>

using namespace std;

// funtion prototyping

void greet(string nameUser, string city, int age);

int main()
{
    greet("aryan singh", "calcutta", 18);
}

void greet(string nameUser, string city, int age)
{
    cout << "Hello, I am " << nameUser << ". I live in "<< city << ". I am very old " << age << endl;
}