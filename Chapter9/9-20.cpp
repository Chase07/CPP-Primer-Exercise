#include<iostream>
#include<list>
#include<deque>

using namespace :: std;

int main()
{
	list<int> li{ 1, 2, 3, 4, 5, 6 };
	deque<int> de1, de2;
	for (auto i : li)
	{
		(i % 2 == 0 ? de2 : de1).push_back(i);
	}
	for (const auto& i : de1)
	{
		cout << i << " ";
	}
	cout << endl;
	for (const auto& i : de2)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}