#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace::std;

int main()
{
	vector<int> vec{ 1, 2, 3, 4, 5, 6 };
	int sum = accumulate(vec.cbegin(), vec.cend(), 0);
	cout << sum << endl;
	return 0;
}