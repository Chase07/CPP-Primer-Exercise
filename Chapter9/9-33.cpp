#include<iostream>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6 };
	auto begin = vec.begin();
	while (begin != vec.cend())
	{
		++begin;
		vec.insert(begin, 42);//不将返回值更新begin的值，原begin对象的指针是一个野指针（具体的内部原因尚不了解）；
		++begin;
	}
	for (auto& i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
