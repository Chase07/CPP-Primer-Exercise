#include<iostream>
#include<vector>

using namespace::std;
//���ע�⣺ʹ�ò���Ҫ�ı�ֵ���β�ʱ����ס�䶨��Ϊconst;
//             ��СƵ���ĺ���Ҳ��ס����inline
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
	v1.push_back(fun1);//fun1��Ϊʵ�Σ����Զ�ת����Ϊ����ָ��
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