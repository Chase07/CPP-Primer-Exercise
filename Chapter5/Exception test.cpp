#include<iostream>
#include<string>
#include<stdexcept>

using namespace::std;

int main()
{
	int i1, i2;
	while (cin >> i1 >> i2)
	{
		try
		{
			if (i2 == 0)
				throw runtime_error = "Same value!" ;
			cout << i1 << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl;
		}
	}
	

	return 0;
}
