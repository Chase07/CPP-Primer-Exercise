#include<iostream>

using namespace::std;
using arrT = int[10];
static int D[10] = { 9, 9, 9, 9, 9, 9, 9, 9, 9, 9 };
arrT* funa()//(1)
{
	static int a[10]  = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	return &a;
}
int (*funb()) [10]//(2)返回数组指针的函数
{
	static int b[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	return &b;
}
auto func() -> int(*)[10]//(3)
{
	static int c[10] = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
	return &c;
}
decltype(D)* fund()//(4)
{
	static int d[10] = { 9, 9, 9, 8, 9, 9, 9, 9, 9, 9 };
	return &d;
}
int main()
{
	arrT* A = funa();
	int(*B) [10] = funb();//标准数组指针形式
	arrT* C = func();
	arrT* E = fund();
	for (auto i : *A)
		cout << i << " ";
	cout << endl;
	for (auto i : *B)
		cout << i << " ";
	cout << endl;
	for (auto i : *C)
		cout << i << " ";
	cout << endl;
	for (auto i : *E)
		cout << i << " ";
	cout << endl;
	return 0;
}
