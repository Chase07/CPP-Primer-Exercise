#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>

using namespace::std;

int main()
{
	map<string, vector<string>> families;
	string family_name, child_name;

	//Ϊ��ʹwhile()����ɸ���������������������ʾ����ʹ��lambda�����������ͱ���Ϊbool
	//cout ����ʽ����ͨ�����ò���[&]
	while ([&]()->bool {cout << "A new family:"; return 
		cin >> family_name && family_name != "#"; }())
	//                                            ^^�����()�������
	{
		
		while(cin >> child_name && child_name != "#")
		{
			//families[family_name]��������vector
			families[family_name].push_back(child_name);
		}
		
	}
	//#����ֹͣ����
	cout << endl;
	for (auto& i : families)
	{
		for (auto& ii : i.second)
		{
			cout << i.first << " " << ii << endl;
		}
	}

		
	return 0;
}