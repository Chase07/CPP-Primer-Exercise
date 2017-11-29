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

	//为了使while()内完成更多操作（在这里是输出提示），使用lambda，但返回类型必须为bool
	//cout 是隐式捕获，通过引用捕获[&]
	while ([&]()->bool {cout << "A new family:"; return 
		cin >> family_name && family_name != "#"; }())
	//                                            ^^这里的()必须存在
	{
		
		while(cin >> child_name && child_name != "#")
		{
			//families[family_name]在这里是vector
			families[family_name].push_back(child_name);
		}
		
	}
	//#代表停止输入
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