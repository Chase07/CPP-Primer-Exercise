#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace::std;

int main()
{
	int grade;
	cout << "Input the grade :" << endl;
	cin >> grade; 

	vector<string> score{ "F", "D", "C", "B", "A", "A++" };
	string lettergrade;
	if (grade < 60)
	{
		lettergrade = score[0];
	}
	else
	{
		lettergrade = score[(grade - 50) / 10];
		if (grade != 100 && (grade % 10) < 3)
		{
			lettergrade += '-';
		}
		else if (grade != 100 && (grade % 10) > 7)
		{
			lettergrade += '+';
		}

	}
	cout << lettergrade << endl;
	return 0;
}