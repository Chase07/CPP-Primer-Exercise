#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<list>

using namespace::std;

int main()
{
	//(a)
	vector<int> vec1;
	list<int> lst;
	int i;
	while (cin >> i)
		lst.push_back(i);
	//vec1.resize(lst.size());//fixing it here
	copy(lst.cbegin(), lst.cend(), back_inserter(vec1));//or fixing it by using a insert iterator yeilded from a back_inserter()
	for(auto& i : vec1)
	{
		cout << i << " ";
	}
	cout << endl;

	//(b)
	vector<int> vec2;
	vec2.reserve(10);//reserve does not change the number of elements in the container; it affects only how much memory the vector preallocate.
	//vec2.resize(10);//fixing it here
	fill_n(back_inserter(vec2), 10, 6);//or fixing it by using the method same as (a)
	for (auto& i : vec2)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}