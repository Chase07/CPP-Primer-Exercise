#include<iostream>
#include<string>
#include<vector>
using namespace::std;

int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while(cin >> grade)
	{
		auto it = scores.begin();
		if (grade <= 100)
		{
			it += grade / 10;
			++(*it);
		}
	}
	for (auto i : scores)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}