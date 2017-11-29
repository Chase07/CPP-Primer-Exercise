#include<iostream>
#include<vector>
#include<list>
#include<string>

using namespace::std;

int main()
{
	vector<string> svec{"Hello!"};
	list<string> slist;
	slist.insert(slist.begin(), "over!");
	svec.insert(svec.begin(), 9, "Hi!");

	slist.insert(slist.begin(), svec.end() - 1, svec.end());
	slist.insert(slist.end(), { "Let", "it", "go", "~~~" });
	for (auto& i : slist)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}