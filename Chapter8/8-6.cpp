#include"7-21.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace::std;

int main(int argc, char** argv)
{
	Sales_data total;
	ifstream fs(argv[1]);
	if(read(fs, total))
	{
		Sales_data trans;
		while (read(fs, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data!?" << endl;
	}
	return 0;
}