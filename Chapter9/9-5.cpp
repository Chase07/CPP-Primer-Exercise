#include<iostream>
#include<vector>
#include<iterator>

using namespace::std;

vector<int>::const_iterator Find(vector<int>::iterator begin, vector<int>::const_iterator end, const int& key)
{
	while (begin != end)
	{
		if (*begin++ == key) return --begin;
	}
	return end;
}

int main()
{
	int key;
	vector<int> vec1{ 0, 1, 2, 3, 4, 5, 6 };
	cout << "Which key you wanna find ?" << endl;
	cin >> key;
	if (Find(vec1.begin(), vec1.cend(), key) != vec1.end())
		cout << *(Find(vec1.begin(), vec1.cend(), key)) << " Successful!!!" << endl;
	else
		cout << "Failure!!!" << endl;
	return 0;
}