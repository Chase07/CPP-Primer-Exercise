#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

using namespace::std;
using namespace std::placeholders;

bool is_short(const int& i1, const int& i2)
{
	return i1 < i2;
}
bool is_long(const int& i1, const int& i2)
{
	return i1 > i2;
}
int main()
{
	vector<int> vec1{ 1, 2, 3, 4, 5 };
	vector<int> vec2{ 1, 2, 3, 4, 5 };
	//1.
	sort(vec1.begin(), vec1.end(), is_short);
	for (auto& i : vec1)
		cout << i << " ";
	cout << endl;
	//2.
	sort(vec1.begin(), vec1.end(), bind(is_short, _2, _1));
	for (auto& i : vec1)
		cout << i << " ";
	cout << endl;
	//3.
	sort(vec2.begin(), vec2.end(), is_long);
	for (auto& i : vec2)
		cout << i << " ";
	cout << endl;
	/*method2 is same as method3,
	 
	 推测：谓词判断为false，sort就调换传入参数的位置，否则不调换
	*/
	
	return 0;
}