#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<numeric>

using namespace::std;

int main()
{
	// ex 11-9 
	map<string, list<unsigned>> map9;


	// ex 11-10
	map<vector<int>::iterator, int> map1;
	map<list<int>::iterator, int> map2;

	vector<int> vec;
	//成功插入
	map1.insert(pair<vector<int>::iterator, int>(vec.begin(), 0));

	list<int> lis;
	//报错C2678
	//原因是list的迭代器不支持 '<' operator
	map2.insert(pair<list<int>::iterator, int>(lis.begin(), 0));
	//以上的insert实际上都使用了map的匿名对象
	return 0;
}