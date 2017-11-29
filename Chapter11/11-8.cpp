#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include<numeric>

using namespace::std;

inline void change(string& word, set<char> punctuation)
{
	for_each(word.begin(), word.end(), [](char& c) { if (isupper(c)) { c = tolower(c); } });
	for (auto iter = word.begin(); iter != word.end(); ++iter)
	{
		if (punctuation.find(*iter) != punctuation.end())
		{
			iter = word.erase(iter);
			--iter;//回退一位以免忽略了原来位置的下一个元素
		}
	}

}

int main()
{
	ifstream in("11-3.txt");
	map<string, size_t> uni_word;
	vector<string> excl_word{ "the", "but", "and", "or" };
	set<char> excl_punct{ '.', ',', '!', '?' };
	string word;
	while (in >> word)
	{
		change(word, excl_punct);
		if (find(excl_word.begin(), excl_word.end(), word) == excl_word.end())
		{
			++uni_word[word];
		}
	}

	for (auto& i : uni_word)
		cout << i.first << " occurs " << i.second << endl;
	cout << endl;
	return 0;
}