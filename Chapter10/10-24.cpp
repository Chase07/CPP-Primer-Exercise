#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<functional>

using namespace::std;
using namespace std::placeholders;

inline bool check_size(const int& it, const string& str)
{
	return it > str.size();
}

int main()
{
	vector<int> vec{ 5, 6, 7, 8, 4 };
	auto result = find_if(vec.begin(), vec.end(), bind(check_size, _1, "happy"));
	cout << *result << endl;
	return 0;
}