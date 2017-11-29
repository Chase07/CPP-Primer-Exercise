#include<iostream>

using namespace::std;

void swap(int **q, int **p)
{
	int *temp;
	temp = *q; 
	*q = *p;
	*p = temp;
}

int main()
{
	int a = 1, b = 2;
	int *q = &a, *p = &b;
	int* &v = q;//int*类型的引用
	cout << *q << *p << endl;

	swap(&q, &p);
	cout << *q << *p << endl;
	return 0;
}