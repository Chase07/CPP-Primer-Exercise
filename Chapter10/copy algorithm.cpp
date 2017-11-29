#include<iostream>
#include<vector>
#include<list>

using namespace::std;

int main()
{
	int a1[] = { 0, 1, 2, 3, 4 };
	int a2[sizeof(a1) / sizeof(*a1)];//直到今天，我才知道数组名不是一个常量指针,而且sizeof是一个操作符———2016.11.13
	auto ret = copy(begin(a1), end(a1), a2);
	for (int i = 0; i != size(a1); ++i)
		cout << a2[i] << " ";
	cout << endl;
	return 0;
}