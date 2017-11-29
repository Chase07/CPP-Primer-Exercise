#include<iostream>
#include<string>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<iterator>
#include<fstream>
#include<sstream>

using namespace::std;

void word_counting(ifstream& in)
{
	unordered_map<string, size_t> word_count;
	unordered_set<string> unexp_word{ "The", "But", "And", "Or", "the", "but", "and", "or" };

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
}
void word_transformation(ifstream& rule_file, ifstream& input_file)
{
	unordered_map<string, string> trans_map;
	string key, value;
	while (rule_file >> key && getline(rule_file, value))
	{
		if(value.size() > 1)
			trans_map.emplace(key, value.substr(1));
	}
	string text;
	while (getline(input_file, text))
	{
		string word;
		istringstream in(text);
		while (in >> word)
		{
			/*if (trans_map.find(word) != trans_map.end())
				word = trans_map.find(word)->second;
			cout << word << " ";*/
			cout << ((trans_map.find(word) != trans_map.end()) ? trans_map.find(word)->second : word )<< " ";
		}
		cout << endl;
	}
}
int main()
{
	cout << "ex 11-38-1: " << endl;
	ifstream in("11-3.txt");
	word_counting(in);//ex 11-38-1
	cout << "ex 11-38-1: " << endl;
	ifstream rule_file("11-33 rule.txt"), input_file("11-33 input.txt");
	word_transformation(rule_file, input_file);//ex 11-38-2
	return 0;
}