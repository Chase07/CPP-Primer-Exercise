#include<iostream>

using namespace::std;

void print(const int (&a)[5])//引用整个数组
{
	for (auto i : a)
		cout << i << ' ';
}
int main()
{
	int a[5] = { 1, 2 ,3 ,4 ,5 };
	print(a);

	return 0;
}
