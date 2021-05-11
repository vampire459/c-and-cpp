#include <iostream>

using namespace std;

int main(void)
{
	int Num=9, Num1 ;
	char character= 'a';
	bool boolean = true;
	float pie = 3.14;
	double poojaBankAccount =516461616; // That's just my sister, she hasn't withdrawn her savings account in 3 months
	
	cout << "Size is:  " << sizeof(Num) << "bytes" << endl;
	cout << "Size is:  " << sizeof(char) << "bytes" << endl;
	cout << "Size is:  " << sizeof(bool) << "bytes" << endl;
	cout << "Size is:  " << sizeof(float) << "bytes" << endl;
	cout << "Size is:  " << sizeof(double) << "bytes" << endl;
	cout << "Size of int (min): " << INT8_MIN << endl;
	cout << "Size of int (max): " << INT8_MAX << endl;
	cout << "Size of the unsigned int is: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "Size of the UINT is: " << UINT8_MAX << " bytes" << endl;
	return 0;
}

