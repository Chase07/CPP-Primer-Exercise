#include<iostream>
#include<string>
#include<set>
#include<map>
#include<iterator>
#include<fstream>

using namespace::std;

int main()
{
	ifstream in("11-3.txt");
	map<string, size_t> word_count;
	set<string> unexp_word{ "The", "But", "And", "Or", "the", "but", "and", "or" };

	string word;
	while (in >> word)
	{
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