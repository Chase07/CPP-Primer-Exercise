#include<iostream>

using namespace::std;

int main()
{
	int a, b;
	cin >> a >> b;
	try
	{
		if (a != b)
		{
			throw runtime_error("unequal!");
		}
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl;
	}
		
	

	return 0;
}
