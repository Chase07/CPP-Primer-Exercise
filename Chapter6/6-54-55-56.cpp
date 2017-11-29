#include<iostream>
#include<vector>

using namespace::std;
//编程注意：使用不需要改变值的形参时，记住其定义为const;
//             短小频繁的函数也记住将其inline
inline int fun1(const int i1, const int i2)
{ 
	return 0; 
}
using f = int(*)(const int i1, const int i2);
//using f = int(const int i1, const int i2);
//typedef int f(const int i1, const int i2);
//typedef decltype(fun1) f;
inline int add(const int i1, const int i2)
{
	return i1 + i2;
}
inline int subtract(const int i1, const int i2)
{
	return i1 - i2;
}
inline int multiply(const int i1, const int i2)
{
	return i1 * i2;
}
inline int divide(const int i1, const int i2)
{
	return i1 / i2;
}
int main()
{
	vector<f> v1;
	v1.push_back(fun1);//fun1作为实参，将自动转换成为函数指针
	v1.push_back(add);
	v1.push_back(subtract);
	v1.push_back(multiply);
	v1.push_back(divide);
	for (auto i : v1)
	{
		cout << i(10, 2) << endl;
	}
	return 0;
}