#include <iostream>
using namespace std;
	

#pragma startup func1
#pragma exit func2

void func1()
{
	cout << "Inside func1()\n: "; 
}

void func2()
{
	cout << "Inside func2()\n";
}

int main()
{

    int main;
	cout << "Inside func()\n: "; 
    scanf("%i", main);
	void func1();
	void func2();
	cout << "Inside main()\n";

	return 0;
}

