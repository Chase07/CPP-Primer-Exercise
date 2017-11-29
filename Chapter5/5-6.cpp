#include<iostream>
#include<string>
#include<vector>

using namespace::std;

int main()
{
	int grade;
	cout << "Input the grade :" << endl;
	cin >> grade;

	vector<string> score{ "F", "D", "C", "B", "A", "A++" };
	string lettergrade;

	grade < 60 ? lettergrade = score[0] : (grade == 100 ? lettergrade = score[5] : lettergrade = score[(grade - 50) / 10]);
	lettergrade +=
		(grade == 100 || grade < 60) 
		? "" 
		: (grade % 10 > 7 ? "+" : (grade % 10 < 3) ? "-" : "" );
	cout << lettergrade << endl;
	return 0;
}