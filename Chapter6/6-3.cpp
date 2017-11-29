#include<iostream>

using namespace::std;

int fact(int a);

int main()
{
	int a;
	cin >> a;
	cout << fact(a) << endl;

	return 0;
}

int fact(int a)
{
	int product = 1;
	while (a > 1)
	{
		product *= a--;
	}
	return product;
}