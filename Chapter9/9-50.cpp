#include<iostream>
#include<string>
#include<vector>
using namespace::std;

int main()
{
	int sum = 0;
	double sum1 = 0.0;
	vector<string> vec{ "0", "1", "2", "3", "4", "5", "6" };
	vector<string> vec1{ "1.2", "3.45", "6.789" };
	for (auto& i : vec)
	{
		sum += stoi(i);
	}
	cout << sum << endl;
	for (auto& i : vec1)
	{
		sum1 += stod(i);
	}
	cout << sum1 << endl;
	return 0;
}