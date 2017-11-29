#include<iostream>
#include<algorithm>
#include<vector>

using namespace::std;

int main()
{
	vector<int> vec{ 1, 3, 5, 7 };
	for (auto start = vec.cend(); start != vec.cbegin(); )
	{
		cout << *--start << " ";
	}
	cout << endl;
	return 0;
}