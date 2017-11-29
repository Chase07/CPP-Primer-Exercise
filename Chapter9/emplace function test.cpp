#include<iostream>
#include<string>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	vector<int> vec{ 2, 3, 4, 5 };
	vec.emplace(vec.begin(), 1);
	vec.emplace(vec.begin() + 1, 0);
	vec.emplace(vec.begin() + 3, 0);
	for(auto& i : vec)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}