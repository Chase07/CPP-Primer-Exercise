#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>

using namespace::std;

int main()
{
	ifstream in("11-12.txt");
	vector<pair<string, int>> vec;

	string word;
	string first;
	while (in >> word)
	{
		int second;
		if (!isalpha(word[0]))
		{
			second = stoi(word, nullptr, 10);
			//1.
			//vec.push_back(make_pair(first, second));
			//2.
			//vec.push_back({ first, second });
			//3.
			//vec.push_back(pair<string, int>(first, second));
			//4.
			vec.emplace_back(first, second);//easiest way !!!
		
		}
		else
		{
			first = word;
		}
	}

	for (auto& i : vec)
	{
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}