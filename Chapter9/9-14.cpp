#include<vector>
#include<list>
#include<string>
#include<iostream>

using namespace::std;

int main()
{
	list<char*> li1{ "Li", "Jie", "Bo" };
	vector<string> vec;
	vec.assign(li1.cbegin(), li1.cend());
	for (const auto& i : li1)
	{
		cout << i << " ";
	}
	cout << endl;
	for(const auto& i:vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}