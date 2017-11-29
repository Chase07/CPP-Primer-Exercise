#include<iostream>

constexpr int fun1(int i)
{
	return i * 2;
}
using namespace::std;

int main()
{
	int i = 9;
	int arr[fun1(2)] = {1};
	for (auto i : arr)
	{
		cout << i << " ";
	}
	cout << 1 + fun1(i);
	return 0;
}