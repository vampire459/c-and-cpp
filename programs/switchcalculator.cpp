#include <iostream>

using namespace std;

int main(void)
{
    float num1, num2;
    char operation;
    cout << endl << endl; // Asthetic reasons
    cout << "Switch statement calculator" << endl << endl;
    cout << "Only two values" << endl;
    cout << "Enter a linear expression: ";
    cin >> num1 >> operation >> num2;

/* Switch case operator */
    switch (operation)
    {
    case '*':
        cout<<"Multiplication: " << num1*num2 << endl << endl;;
        break;
    case '/':
        cout<<"Division: " << num1/num2 << endl << endl;;
        break;
    case '+':
        cout<<"Addition: " << num1+num2 << endl << endl;;
        break;
    case '-':
        cout<<"Subtraction: " << num1-num2 << endl << endl;;
        break;
    case '%':
        cout<< "Checking if the numbers are integral values: " << endl << endl;
        bool isNum1Int, isNum2Int;
        isNum1Int =(int(num1)==num1);
        isNum2Int =(int(num2)==num2);
        
        if (isNum1Int && isNum2Int)
        {
            cout << "Remaninder: " << int(num1)%int(num2) << endl << endl;
        }
        
    default:
        cout << "Why are you the way you are?" << endl << endl;;
        break;
    }

    return 0;
}