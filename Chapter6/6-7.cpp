#include<iostream>

using namespace::std;

int foo()
{
	static int a = 0;
	return ++a;
}
int main()
{
	int a;
	cin >> a;//�ظ�a�����
	for (unsigned i = 0; i != a ; ++i)
	{
		cout << foo() << endl;
	}
	
	return 0;
}