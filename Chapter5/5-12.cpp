#include<iostream>

using namespace::std;
//����Ĳο���������һ��˼·
int main()
{
	char text;
	int ff = 0, fl = 0, fi = 0;
	while (cin >> text)
	{
		switch (text)
		{
			case 'f':
			{
				cin >> text;
				switch (text)
				{
					case 'f':
						++ff;
						break;
					case 'l':
						++fl;
						break;
					case 'i':
						++fi;
						break;
					default :
						break;
				}
			}
			default:
				break;
		}
	}
	cout << "ff :" << ff << endl
		<< "fl :" << fl << endl
		<< "fi :" << fi << endl;

	return 0;
}