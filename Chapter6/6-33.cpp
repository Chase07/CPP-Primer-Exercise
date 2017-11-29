#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace::std;
using Iter = vector<string>::iterator;
void recursive_print(Iter it1, Iter it2)
{
	if (it1 != it2)
	{
		cout << *it1;
		recursive_print(++it1, it2);
	}
}

int main()
{
	vector<string> v {"I ", "Love ", "C++ ", "Programming ", "!"};
	recursive_print(v.begin(), v.end());
	cout << endl;
	return 0;
}