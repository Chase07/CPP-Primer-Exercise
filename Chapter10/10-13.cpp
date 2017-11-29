#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace::std;

inline bool f1(const string& str)
{
	return str.size() >= 5;
}

int main()
{
	vector<string> vec{ "123", "12345", "1234", "132456789", "123456", "1324567", "1", "12", "1234" };
	auto iter = partition(vec.begin(), vec.end(), f1);
	vec.erase(iter, vec.end());
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}