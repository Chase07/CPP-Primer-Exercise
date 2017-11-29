#include<iostream>
#include<vector>
#include<algorithm>

using namespace::std;

int main()
{
	//find()
	int val = 42;
	vector<int> vec1{ 1, 23, 42, 56 };
	vector<int> vec2{ 1, 23, 72, 56 };
	auto result1 = find(vec2.cbegin(), vec2.cend(), val);
	cout << "The value " << val << (result1 == vec2.cend() ? " is not present" : " is present") << endl;
	
	//find_first_of()
	vector<char> vec3{ 'a', 'b', 'A', 'B' };
	vector<char> vec4{ 'A', 'B' };
	auto result2 = find_first_of(vec3.begin(), vec3.end(), vec4.begin(), vec4.end(), [](const char& str1, const char& str2)->bool {return str1 == str2; });
	cout << "In vec3, the first match to vec4 is " << *result2 << endl;

	auto result3 = find_first_of(vec3.begin(), vec3.end(), vec4.begin(), vec4.end(), [](const char& str1, const char& str2)->bool {return tolower(str1) == tolower(str2); });
	cout << "Lower: In vec3, the first match to vec4 is " << *result3 << endl;
	return 0;
}