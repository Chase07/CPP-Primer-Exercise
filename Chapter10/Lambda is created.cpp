#include<iostream>

using namespace::std;

int main()
{
	size_t v1 = 42;
	auto f1 = [v1]()->int {return v1; };//Lambda is created here. Copies v1 into the callable object named f1 
	v1 = 0;
	cout << f1() << endl;//return 42;
	return 0;
}