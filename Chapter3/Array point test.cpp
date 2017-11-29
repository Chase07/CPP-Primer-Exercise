#include<iostream>
#include<iterator>
using namespace::std;

int main()
{
	constexpr size_t sz = 5;
	int arr[sz] = {1,2, 3, 4, 5};
	int *p = arr + 10;//an error, but can't be detected  

	int i = 0, sy = 42;
	int *p = &i, *q = &sy;
	if (p < q)//meaningless
	return 0;
}