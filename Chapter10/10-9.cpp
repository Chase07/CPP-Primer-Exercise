#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<numeric>

using namespace::std;

int main()
{
	ifstream input("10-9.txt");
	vector<string> story;
	for (string word; input >> word; story.push_back(word));
	input.close();
	
	sort(story.cbegin(), story.cend());//这里用了底层const的迭代器，就导致了C2678的错误。这种类型的错误（此前也遇到这样的错误），都是直接跳到标准库的中的，我这里不是很理解为什么这样。（这个错误把参数改为begin()和end()就没事了）————已经弄明白（2016.11.16）

	auto end_unique = unique(story.begin(), story.end());
	story.erase(end_unique, story.cend());
	for (auto& i : story)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}