#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<list>
using namespace::std;

int main()
{
	vector<string> vec1{ "Swimming", "is", "not", "cheap" };
	list<const char*> lis2{ "Swimming", "is", "not", "cheap" };
	if (equal(vec1.cbegin(), vec1.cend(), lis2.cbegin()))//һ����������ǵڶ����еİ汾�����ܲ�������������dereferencable�Ĵ���
	{
		cout << "yep" << endl;
	}
	else
	{
		cout << "nop" << endl;
	}
	return 0;
}