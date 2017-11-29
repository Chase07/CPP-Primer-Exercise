#include<iostream>

using namespace::std;

int main()
{
	int grade; 
	cin >> grade;
	//(1)
	cout << ((grade > 85) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail") << endl;
	//(2)
	if (grade > 85)
	{
		cout << "high pass" << endl;
	}
	else if (grade > 75)
	{
		cout << "pass" << endl;
	}
	else if (grade > 60)
	{
		cout << "low pass" << endl;
	}
	else
	{
		cout << "fail" << endl;
	}

	return 0;
}