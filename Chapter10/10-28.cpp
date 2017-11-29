#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<list>
using namespace::std;

template <typename Sequence> void print(Sequence const& seq)
{
	for (const auto& i : seq) std::cout << i << " ";
	std::cout << std::endl;
}//��һ��ʹ��ģ�壬ͬʱ��ᵽ���ķ���

int main()
{
	vector<int> vec1{ 1, 2, 3, 4 };
	list<int> lis2;
	vector<int> vec3;
	vector<int> vec4;

	//����δ��Ϥfront_inserter��calls push_front()���õ���������д���Ĵ������
	/*copy(vec1.begin(), vec1.end(), front_inserter(vec2));*/
	copy(vec1.begin(), vec1.end(), front_inserter(lis2));
	copy(vec1.begin(), vec1.end(), back_inserter(vec3));//vector support push_back()
	copy(vec1.begin(), vec1.end(), inserter(vec4, vec4.begin()));
	print(lis2);
	print(vec3);
	print(vec4);

	return 0; 
}