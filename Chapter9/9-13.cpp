#include<vector>
#include<list>
#include<iostream>

using namespace::std;

int main()
{
	list<int> li1{ 3, 2, 1 };
	vector<int> vec{ 1, 2, 3 };
	vector<double> vecd1(vec.begin(), vec.end());
	vector<double> vecd2(li1.begin(), li1.end());

	vector<vector<double>> vecd{ vecd1, vecd2 };
	for (auto& i1 : vecd)
	{
		for (auto& i2 : i1)
		{
			cout << i2 << " ";
		}
		cout << endl;
	}
	return 0;
}
