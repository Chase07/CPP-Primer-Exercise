#include<iostream>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6 };
	auto iter = vec.begin();
	while (iter != vec.cend())
	{
		if(*iter % 2 != 0)
		{
			iter = vec.insert(iter, 42);
			++iter;
		}
	}
	for (auto& i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
