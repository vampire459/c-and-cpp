#include <iostream>

using namespace std;

int main(void)
{
	char gender = 'M';
	int age ;
	float salaryPerAnnum = 450000 ;
	double bankBalance = 35613312398;
	int DateOfBirth = 8;
	int MonthOfBirth = 6;
	int YearOfBirth = 1977;
	int YearNow;
	bool val;

	cout << "Enter the year today:" << endl;
	cin >> YearNow;
	age = YearNow - YearOfBirth;
		if (age >=18 )
		{
			val = true;
			cout << "Give the money to the person " << endl;
		}
		else {
			cout << "comeback after some years" << endl;
		}
	cout << "Is he a guy?" << endl;
		
			cout << gender << endl;

	cout << age << endl;
	cout << DateOfBirth << MonthOfBirth << YearOfBirth << endl;


	cout << "does he need the money" << endl;
		if (salaryPerAnnum > 100,000 || bankBalance > 38981279837917)
		{
			cout << "no\n";
		}
		else
		{
			cout << "yes\n";
		}
	return 0;
}
