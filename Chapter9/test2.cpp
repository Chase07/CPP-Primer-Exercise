#include<iostream>
#include<vector>

using namespace::std;

int main()
{
	vector<int> v1{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto iter = v1.begin();
	while (iter != v1.end())
	{
		if (*iter % 2 == 0)
		{
			iter = v1.erase(iter);
		}
		else
		{
			iter = v1.insert(iter, *iter);
			iter += 2;
		}
	}
	for (auto& i : v1)
		cout << i << " ";
	cout << endl;
	
	return 0;
}

