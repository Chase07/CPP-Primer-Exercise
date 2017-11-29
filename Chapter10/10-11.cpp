#include<iostream>
#include<string>
#include<iterator>
#include<vector>
#include<algorithm>

using namespace::std;

inline bool isShort(const string& str1, const string& str2)
{
	return str1.size() > str2.size();
}
void elimDup(vector<string>& vec)
{
	sort(vec.begin(), vec.end());//���ֵ�˳������
	auto uniEnd = unique(vec.begin(), vec.end());//���ظ�Ԫ���ͺ�
	vec.erase(uniEnd, vec.end());
}
void sortBySize(vector<string>& vec)
{
	//stable_sort(vec.begin(), vec.end(), isShort);
	stable_sort(vec.begin(), vec.end(), [](const string& a, const string& b) {return a.size() > b.size(); });//Using a Lambda expression
}

int main()
{
	vector<string> vec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	elimDup(vec);
	sortBySize(vec);
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}