#include<iostream>
#include<string>

class A
{
private:
	int a1;
	std::string a2;
public:
	A() = default;
	A(int a1, std::string a2) 
	{
		//������Ǹ�ֵ���ǳ�ʼ��
		this->a1 = a1;
		this->a2 = a2;
	}
	void show()
	{
		std::cout << a1 << "\t" << a2 << std::endl;
	}
	//void  f1(int a1, std::string a2)
	//{
	//	//ֻҪ˵�������򼴿�
	//	/*(*this).a1 = a1;
	//	(*this).a2 = a2;
	//	A::a1 = a1;
	//	this->a2 = a2;*/
	//	//a1, a2�����βΣ��Գ�Ա����a1��a2û��Ӱ��
	// ��������ʹ��a1��a2,�����˳�Ա����a1��a2
	//	a1 = a1;
	//	a2 = a2;
	//}
};
 
int main()
{
	//A A1;
	//A1.show();
	A A2(666, "Back!");
	A2.show();
	//std::cout << A1.a1 << "\t" << A1.a2 << std::endl;
	//A1.f1(666, "Back!");
	//std::cout << A1.a1 << "\t" << A1.a2 << std::endl;
	return 0;
}