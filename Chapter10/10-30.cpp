#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace::std;

int main()
{
	istream_iterator<int> in(cin), eof;
	ostream_iterator<int> out(cout, "@");
	vector<int> vec(in, eof);
	sort(vec.begin(), vec.end());
	copy(vec.cbegin(), vec.cend(), out);
	cout << endl;
	return 0;
}