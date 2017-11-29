#include<vector>
#include<iostream>

using namespace::std;

int main()
{
	vector<int> vec;
	cout << vec.at(0) << " " << vec.front() << " " 
		<< *vec.begin() << " " << vec[0] << endl;

	return 0;
}