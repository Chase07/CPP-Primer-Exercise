#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<numeric>

using namespace::std;

int main()
{
	// ex 11-9 
	map<string, list<unsigned>> map9;


	// ex 11-10
	map<vector<int>::iterator, int> map1;
	map<list<int>::iterator, int> map2;

	vector<int> vec;
	//�ɹ�����
	map1.insert(pair<vector<int>::iterator, int>(vec.begin(), 0));

	list<int> lis;
	//����C2678
	//ԭ����list�ĵ�������֧�� '<' operator
	map2.insert(pair<list<int>::iterator, int>(lis.begin(), 0));
	//���ϵ�insertʵ���϶�ʹ����map����������
	return 0;
}