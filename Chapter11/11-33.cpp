#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<sstream>
#include<iterator>

using namespace::std;

const string transform(const string& str, const map<string, string>& trans_map)
{
	auto iter = trans_map.find(str);
	if (iter != trans_map.end())
		return iter->second;
	return str;
}
map<string, string> buildMap(ifstream& in)
{
	map<string, string> trans_map;
	string key, value;
	while(in >> key && getline(in, value))
	{
		if (value.size() > 1)
		{
			trans_map[key] = value.substr(1);
		} 
	}
	return trans_map;
}

void word_transform(ifstream& rule_file, ifstream& input_file)
{
	map<string, string> trans_map = buildMap(rule_file);
	string text;
	while (getline(input_file, text))
	{
		istringstream strstream(text);//convert the text to a stream
		string word;
		while (strstream >> word)
		{
			word = transform(word, trans_map);
			cout << word << " ";
		}
		cout << endl;
	}
}

int main()
{
	ifstream rule_file("11-33 rule.txt"), input_file("11-33 input.txt");
	word_transform(rule_file, input_file);
	return 0;
}