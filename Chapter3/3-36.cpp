#include<iostream>
#include<vector>
#include<iterator>
using namespace::std;

int main()
{
	vector<int> v1{0, 0, 0};
	vector<int> v2{0, 1, 0};

	if (v1 == v2)
	{
		cout << "OK!" << endl;
	}
	else
	{
		cout << "BAD!" << endl;
	}

	/*
	int a[5] = {0, 0, 0, 0, 0};
	int b[5] = {0, 0, 0, 0, 0};
	int c[4] = {0, 0, 0, 0};

	if (end(a) - begin(a) == end(b) - begin(b))
	{
		auto p = begin(a), q = begin(b);
		for (; p != end(a) && q != end(b) ; ++p, ++q)
		{
			if (*p != *q)
			{
				cout << "BAD!" << endl;
				break;
			}
		}
		if ( p == end(a) )
		{
			cout << "OK!" << endl;
		}
	}
	else
	{
		cout << "BAD!" << endl;
	}*/
	return 0;
}