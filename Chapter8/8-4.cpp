#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace::std;

void ReadFileToVec(const string& FileName, vector<string>& vec)//C++���ע�������밲ȫ�ԣ���Ҫ��ס����Ҫ�ı�ֵ��ʹ��const����Ӱ��ԭ���ݵ������ʹ��reference��&��
{
	ifstream is(FileName);
	if (is)//����ļ��Ƿ�򿪳ɹ�
	{
		string str;
		while (getline(is, str))
		{
			vec.push_back(str);
		}
	}
}
int main()
{
	vector<string> vec;
	ReadFileToVec("8-4.txt", vec);
	for(const auto &i : vec)//���ı�ԭֵ��ʹ��reference��&��
	{
		cout << i << endl;
	}
	 
	return 0;
}