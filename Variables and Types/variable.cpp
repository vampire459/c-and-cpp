#include <iostream>

using namespace std;

int main(void)
{
    char character = 'c';

    float annualSalary, monthlySalary;

    cout << "Enter Your annual salary:";
    cin >> annualSalary;

    monthlySalary = annualSalary/12;

    cout << "Your monthly salary is: " << monthlySalary << endl;
    cout << character << endl;
    
    cout << "In ten Years you will earn: "<< annualSalary*10 << "🚀" << endl;
    cout << character << endl;
    
    cout << "The size of the var monthlySalary is " << sizeof(monthlySalary) << endl;
    cout << character << endl;

    return 0;
}