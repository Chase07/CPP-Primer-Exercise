#include<iostream>
#include<string>
#include<iterator>

using namespace::std;

int main()
{
	string name("AnnaBelle");
	auto pos1 = name.find("Anna");
	auto pos2 = name.find("anna");
	cout << pos1 << " " << pos2 << endl;
	string numbers("0123456789"), name1("r2d2");
	auto po3 = name1.find_first_of(numbers);
	cout << po3 << endl;
	string dept("03714p3");
	auto pos4 = dept.find_first_not_of(numbers);
	cout << pos4 << endl;

	string::size_type pos = 0;
	while ((pos = dept.find_first_of(numbers, pos)) != string::npos)
	{
		cout << "found number at index: " << pos << " element is " << dept[pos] << endl;
		++pos;//ÿһ��dept�е�������numbers�ж��У�ÿ��while��������䶼�᷵�ص�ǰpos��ָ��λ�ã�������Ҫִ��++pos;
	}
	//Searching Background
	string river("Mississipi");
	auto first_pos = river.find("is");
	auto last_pos = river.rfind("is");
	cout << first_pos << " " << last_pos << endl;//1 and 4


	return 0;
}