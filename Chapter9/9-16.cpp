#include<vector>
#include<list>
#include<iostream>

using namespace::std;

int main()
{
	list<int> li1{ 1, 2, 3, 4 };
	vector<int> vec1{ 1, 2 ,3, 4 };
	vector<int> vectemp;

	vectemp.assign(li1.cbegin(), li1.cend());

	cout << boolalpha << (vec1 == vectemp) << endl;
	return 0;
}