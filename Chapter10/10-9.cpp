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
	
	sort(story.cbegin(), story.cend());//�������˵ײ�const�ĵ��������͵�����C2678�Ĵ����������͵Ĵ��󣨴�ǰҲ���������Ĵ��󣩣�����ֱ��������׼����еģ������ﲻ�Ǻ����Ϊʲô���������������Ѳ�����Ϊbegin()��end()��û���ˣ����������Ѿ�Ū���ף�2016.11.16��

	auto end_unique = unique(story.begin(), story.end());
	story.erase(end_unique, story.cend());
	for (auto& i : story)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}