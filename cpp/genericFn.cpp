#include <iostream>

using namespace std;

template<typename T> // T is kinda standard 
void swap(T& a, T& b)
{
	T temp = a;
	a=b;
	b=temp;
}


int main()
{
	int a=5, b= 9;

	cout << a << " = " << b << endl;
	cout << b << " = " << b << endl;
	cout << "a: " << b << endl;
	cout << "b: " << a << endl;
	return 0;

}

