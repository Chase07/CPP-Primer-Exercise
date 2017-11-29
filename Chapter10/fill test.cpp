#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace::std;
 
int main()
{
	vector<int> vec{ 1, 2, 3, 4 };
	fill(vec.begin(), vec.end(), 0);
	fill_n(vec.begin(), 5, 2);
	for(auto& i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}