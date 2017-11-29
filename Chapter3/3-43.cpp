#include<iostream>

using namespace::std;

int main()
{
	int ia[3][4] =
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};/*
	//(1)
	//由于要把数组的内容输出，倾向于不改变其内容，所以都加上const限定词
	for (const int (&p)[4] : ia)//引用p，p代表一个长度为4的int类型数组
	{
		for (const int q : p)
		{
			cout << q << ' ';
		}
		cout << endl;
	}*/
	//(2)
	
	//(3)
	for (const int (*p)[4] =  ia ; p != ia + 3  ; ++p)//p是一个指向长度为4的int类型的数组的指针
	{
		for (const int *q = *p ; q != *p + 4 ; ++q)//q是一个指向int类型的指针
		{
			cout << *q << ' ';
		}
		cout << endl;
	}

	return 0;
}