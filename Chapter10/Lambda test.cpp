#include<iostream>
#include<vector>
#include<algorithm>

using namespace::std;

int main()
{
	vector<int> vec{ 1, 2, 3 };
	int it = 1;
	for_each(vec.begin(), vec.end(), [it](int& i) {if(i > it)cout << i << " "; });
	auto f = [] {return 42; };
	cout << f() << endl;
	return 0;
}