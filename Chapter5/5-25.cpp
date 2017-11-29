#include<iostream>
#include<stdexcept>

using namespace::std;

int main()
{
	int a, b;
	cin >> a;
	while (cin>> b) 
	{
		try
		{
			if (b == 0)
			{
				throw runtime_error("B is zero !");
			}
			cout << static_cast<double>(a) / b << endl;
			break;
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl;
			cout << "Please input a vaild number for divisor :";
		}
	}

	return 0;
}