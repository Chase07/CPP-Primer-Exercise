#include<iostream>
#include<vector>

using namespace ::std;

int main()
{
	vector<int> vec1{ 1, 2, 3, 4 };
	vector<int> vec2{ 1, 2, 3 };
	if (vec1 < vec2)
		cout << "ture" << endl;
	else
		cout << "false" << endl;
	return 0;
}