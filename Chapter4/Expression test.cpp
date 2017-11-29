#include<iostream>

using namespace::std;

int main()
{
	int m, n;
	cin >> m >> n;
	cout << m << "   " << (m / n)*n + m%n << endl;

	return 0;
}