#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> iv;
	for (decltype(iv.size()) i = 0; i != 10; ++i)
	{
		iv.push_back( i );//��ȷд��
	}
	/*for (decltype(iv.size()) i = 0; i != 10; ++i)
	{
		iv[i] = i; //iv�ǿյģ����ش��� 
	}*/
	return 0;
}