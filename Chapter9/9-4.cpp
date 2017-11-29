#include<iostream>
#include<list>
#include<iterator>

using namespace::std;

bool Find(list<int>::iterator begin, list<int>::const_iterator end, const int& key)
{
	while (begin != end)
	{
		if (*begin++ == key) return true;
	}
	return false;
}

int main()
{
	int key;
	list<int> li1{ 0, 1, 2, 3, 4, 5, 6 };
	cout << "Which key you wanna find ?" << endl;
	cin >> key;
	if (Find(li1.begin(), li1.cend(), key)) 
		cout << "Successful!!!" << endl;
	else
		cout << "Failure!!!" << endl;
	return 0;
}