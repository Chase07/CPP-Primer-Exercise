#include<iostream>
#include<stdexcept>

using namespace::std;

int main()
{
	int A, B;
	cin >> A >> B;
	try
	{
		if (B == 0)
		{
			throw runtime_error("B is zero !");
		}
		cout << static_cast<double>(A) / B << endl;
	}
	catch(runtime_error err)
	{
		cout << err.what() << endl;
	}
	return 0;
}