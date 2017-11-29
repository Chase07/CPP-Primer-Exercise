#include<iostream>
#include<fstream>
#include<string>
#include<map>

using namespace::std;

int main()
{
	ifstream in("Using map.txt");
	map<string, size_t> word_count;
	string word;
	while (in >> word)
	{
		++word_count[word];
	}
	for (const auto& i : word_count)
		cout << i.first << " occurs " << i.second << endl;
	return 0;
}