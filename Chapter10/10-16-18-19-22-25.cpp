#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<fstream>
#include<numeric>
#include<functional>

using namespace::std;

void elimDups(vector<string>& vec)
{
	sort(vec.begin(), vec.end());
	auto new_beg = unique(vec.begin(), vec.end());
	vec.erase(new_beg, vec.end());
}
bool check_size(const string& str, vector<string>::size_type sz)
{
	return str.size() < sz;
}
void biggies(vector<string>& vec, vector<string>::size_type sz)
{
	elimDups(vec);
	/*for_each(vec.begin(), vec.end(), [](const string& word) {cout << word << " "; });//Normal Lambda*/
	for_each(vec.begin(), vec.end(), [](const string& word, ostream& output = cout, char c = ' ') {output << word << c; });//Lambda captures a reference
	cout << endl;
	stable_sort(vec.begin(), vec.end(), [](const string& str1, const string& str2)->bool {return str1.size() < str2.size(); });
	for_each(vec.begin(), vec.end(), [](const string& word) {cout << word << " "; });

	cout << endl;
	//Using partition algorithm
	//把所有不符合条件的分离到后边，返回后边第一个的迭代器
	/*auto new_beg = partition(vec.begin(), vec.end(), [sz](const string& str)->bool {return str.size() < sz; });*/
	
	//Using find_if algorithm
	//把符合第一个条件的找到，返回其迭代器
	/*auto new_beg = find_if(vec.begin(), vec.end(), [sz](const string& str)->bool {return str.size() >= sz; });*/
	//using stable_partition
	/*auto new_beg = stable_partition(vec.begin(), vec.end(), [sz](const string& str)-> bool {return str.size() < sz; });*/
	
	//Using bind function that binds a check_size funtion in stable_partition
	auto new_beg = stable_partition(vec.begin(), vec.end(), bind(check_size, std::placeholders::_1, sz));
	auto count = vec.end() - new_beg;
	for_each(new_beg, vec.end(), [](const string& word) {cout << word << " "; });
	cout << endl << count << endl;
}
int main()
{
	ifstream input("10-16.txt");
	vector<string> vec;
	for (string word; input >> word; )
	{
		vec.push_back(word);
	}
	biggies(vec, 5);

	return 0;
}