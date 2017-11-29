#include<iostream>
#include<string>
#include<set>
#include<map>
#include<iterator>
#include<fstream>
#include<algorithm>

using namespace::std;

inline void change(string& word, set<char> punctuation)
{
	for_each(word.begin(), word.end(), [](char& c) 
	{ 
		if (isupper(c)) c = tolower(c);  
	});
	word.erase(remove_if(word.begin(), word.end(), [&](char c)->bool
	{
		return punctuation.find(c) != punctuation.end();
	}), word.end());
	//for (auto iter = word.begin(); iter != word.end(); ++iter)
	//{
	//	if (punctuation.find(*iter) != punctuation.end())
	//	{
	//		iter = word.erase(iter);
	//		--iter;//回退一位以免忽略了原来位置的下一个元素
	//	}
	//}

}

int main()
{
	ifstream in("11-3.txt");
	map<string, size_t> word_count;
	set<string> unexp_word{ "the", "but", "and", "or" };
	set<char> punct{ ',', '.', '!', '?' };
	string word;

	while (in >> word)
	{
		change(word, punct);
		if (unexp_word.find(word) == unexp_word.end())
		{
			++word_count[word];
		}
	}

	for (auto& i : word_count)
		cout << i.first << " occurs " << i.second << endl;
	cout << endl;
	return 0;
}