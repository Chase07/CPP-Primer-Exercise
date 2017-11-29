#include"7-21.h"
#include<iostream>
#include<fstream>

using namespace::std;


int main(int argc, char** argv)
{
	fstream fis(argv[1]);//8.6txt
	fstream fou(argv[2]);//8.7txt

	Sales_data total;
	if (fis)//Cheaking if the open is succussful
	{
		if (read(fis, total))
		{
			Sales_data trans;
			while (read(fis, trans))
			{
				if (total.isbn() == trans.isbn())
				{
					total.combine(trans);
				}
				else
				{
					print(fou, total) << endl;//输出到特定文件中
					total = trans;
				}
			}
			print(fou, total) << endl;
		}
		else
			cerr << "No data !?" << endl;
	}

	return 0;
}