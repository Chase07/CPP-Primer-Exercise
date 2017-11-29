#include<iostream>
#include<vector>
#include<list>
#include<iterator>

using namespace::std;

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vec(ia, end(ia));
	list<int> li(ia, end(ia));

	for (auto i = vec.cbegin(); i != vec.cend(); )
	{
		if (*i % 2 != 0)
		{
			i = vec.erase(i);
			//vec.erase(i);//此时迭代器i中的成员指针成为一个野指针（wild pointer）
		}
		else
		{
			++i;
		}
			
	}
	for (auto i = li.cbegin(); i != li.cend(); )
	{
		if (*i % 2 == 0)
			i = li.erase(i);
		else
			++i;
	}
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;

	for (auto& i : li)
		cout << i << " ";
	cout << endl;
	return 0;
}