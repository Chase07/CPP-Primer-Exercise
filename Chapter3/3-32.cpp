#include<iostream>
#include<cstddef>
#include<vector>
using namespace::std;

int main()
{
	/*
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[10];
	for (int i = 0; i != 10 ; ++i )
	{
		b[i] = a[i];
	}
	for (auto i : a)
	{
		cout << i << " " ;
	}*/
	vector<int> v1(10);
	
	for (auto it = v1.begin(); it != v1.end() ; ++it)
	{
		*it = it - v1.begin();
	}
	vector<int> v2(v1);//直接复制v1的内容
	for (auto i : v2)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
 }