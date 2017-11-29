#include<iostream>
#include<string>
#include<vector>
using namespace::std;

int main()
{
	/*Exercise3-16
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	vector<int>::iterator i1 = v1.begin();
	cout << "Size: " << v1.size() << "  " << "Contents: " ;
	for (; i1 != v1.end() ; ++i1)
	{
		cout << *i1 << " ";
	}
	cout << endl;
	vector<int>::iterator i2 = v2.begin();
	cout << "Size: " << v2.size() << "  " << "Contents: ";
	for (; i2 != v2.end() ; ++i2)
	{
		cout << *i2 << " ";
	}
	cout << endl;
	vector<int>::iterator i3 = v3.begin();
	cout << "Size: " << v3.size() << "  " << "Contents: ";
	for (; i3 != v3.end() ; ++i3)
	{
		cout << *i3 << " ";
	}
	cout << endl;
	vector<int>::iterator i4 = v4.begin();
	cout << "Size: " << v4.size() << "  " << "Contents: ";
	for (; i4 != v4.end() ;++i4)
	{
		cout << *i4 << " ";
	}
	cout << endl;
	vector<int>::iterator i5 = v5.begin();
	cout << "Size: " << v5.size() << "  " << "Contents: ";
	for (; i5 != v5.end() ; ++i5 )
	{
		cout << *i5 << " ";
	}
	cout << endl;
	vector<string>::iterator i6 = v6.begin();
	cout << "Size: " << v6.size() << "  " << "Contents: ";
	for (; i6 != v6.end() ; ++i6)
	{
		cout << *i6 << " ";
	}
	cout << endl;
	vector<string>::iterator i7 = v7.begin();
	cout << "Size: " << v7.size() << "  " << "Contents: ";
	for ( ; i7 != v7.end(); ++i7)
	{
		cout << *i7 << " ";
	}
	cout << endl;*/

	/*Exercise3-17
	vector<string> v;
	for (string str; cin >> str;)
	{
		for (auto &c : str)
		{
			c = toupper(c);
		}
		v.push_back(str);
	}
	for (vector<string>:: iterator i = v.begin() ; i != v.end() ; ++i)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	//Exercise3-20
	vector<int> v;
	for (int n; cin >> n; )
	{
		v.push_back(n);
	}
	for (vector<int>::iterator i = v.begin(); i != v.end() - 1; ++i)
	{
		cout << *i + *(i + 1) << " ";
	}
	cout << endl;
	vector<int>::iterator j, k;
	for (j = v.begin(), k = v.end() - 1 ; j <= k ; ++j, --k)
	{
		cout << *j + *k << " ";
	}
	cout << endl;
	return 0;
}