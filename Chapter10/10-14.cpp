#include<iostream>

using namespace::std;

int main()
{
	int i1 = 6, i2 = 7;
	auto f1 = [](int i1, int i2) -> int { return i1 + i2; };
	cout << f1(i1, i2) << endl;
	return 0;
}