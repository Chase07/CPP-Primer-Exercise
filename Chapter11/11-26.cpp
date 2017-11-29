#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace::std;

int main()
{
	map<string, int> mymap{ {"Lovely", 5} };

	//"Loveling"(string type) is used to subscript a map,
	//and mapped_value(int type) is the subscript operator return
	int mapped_value = mymap["Lovely"];

	cout << mapped_value << endl;
	return 0;
}
