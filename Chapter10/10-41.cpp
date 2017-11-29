#include<iostream>
#include<algorithm>
#include<vector>

using namespace::std;

int main()
{
	vector<int> vec{ 1, 2, 3, 1, 4, 5, 1, 6, 7, 1 };
	vector<int> new_vec(vec.size());

	replace_copy_if(vec.cbegin(), vec.cend(), new_vec.begin(), [](const int i)->bool { return (i == 1); }, 6);
	for (auto& i : new_vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}