#include<vector>
#include<iostream>
#include<string>
#include<iterator>

using namespace::std;

int main()
{
	vector<char> vec1{ 'O', 'h', '!' };
	string str(vec1.cbegin(), vec1.cend());
	cout << str << endl;
	return 0;
}