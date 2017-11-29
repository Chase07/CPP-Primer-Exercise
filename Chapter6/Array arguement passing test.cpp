#include<iostream>

using namespace::std;

int main()
{
	int a[2] = {1 , 2 };
	for (int i = 0; i != size(a); ++i)//size(a) or end(a) - begin(a)
		cout << a[i] << endl;
	return 0;
}