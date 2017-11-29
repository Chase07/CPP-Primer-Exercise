#include<iostream>
#include<string>
#include<vector>
#include<iterator>

using  namespace::std;

int main()
{
	unsigned counter1 = 0, counter2 = 0;
	string temp, pretemp;
	while (cin >> temp)
	{
		if (temp == pretemp)
		{
			++counter1;
		}
		else
		{
			counter1 = 0;
		}
		if (counter2 < counter1)
		{
			counter2 = counter1;
		}
		pretemp = temp;
	}
	if (counter2 == 0)
	{
		cout << "No word was repeated!" << endl;
	}
	else
	{
		cout << counter2 + 1 << endl;
	}
	
	getchar();
	return 0;
}