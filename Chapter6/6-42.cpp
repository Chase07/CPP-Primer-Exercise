#include<iostream>
#include<string>

using namespace::std;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}
int main()
{
	cout << make_plural(0, "success") << " " << make_plural(0, "failure") << endl;
	cout << make_plural(2, "success", "es") << " " << make_plural(2, "failure") << endl;
	
	

	return 0;
}