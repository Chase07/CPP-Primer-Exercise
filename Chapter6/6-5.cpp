#include<iostream>

using namespace::std;

void Absolute_value()
{
	int a;
	cout << "Please input a number :";
	cin >> a;
	cout << (a < 0 ? -a : a)  << endl;
}
int main()
{
	Absolute_value();

	return 0;
}