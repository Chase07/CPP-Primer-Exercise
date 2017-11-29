#include<vector>
#include<iostream>

using namespace::std;

int main()
{
	vector<int> vec1;
	vector<int> vec2(6);
	vector<int> vec3(6, 7);
	vector<int> vec4{ 6, 6, 6, 6, 6, 6 };

	vector<int> vec5(vec4);
	vector<int> vec6(vec3.begin(), vec3.end());
	vector<vector<int>> vec{ vec1, vec2, vec3, vec4, vec5, vec6 };
	for (auto& i1 : vec)
	{
		for(auto& i2 : i1 )
		{
			cout << i2 << " ";
		}
		cout << endl;
	}
	return 0;
}