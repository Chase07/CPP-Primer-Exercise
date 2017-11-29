#include<iostream>

using namespace::std;

void print(const int a, const int* b, size_t s, char* c)
{
	cout << a << endl;
	while(*c)
	cout << *(c++) ;
	cout << endl;
	for (size_t i = 0; i != s; ++i)
	{
		cout << b[i] << ' ';
	}
}
int main()
{
	int i = 0, j[2] = { 0, 1 };
	char ch[5] = "LOVE";
	print(i, j, end(j) - begin(j), ch);
	return 0;
}