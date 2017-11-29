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
		//下面的是赋值而非初始化
		this->a1 = a1;
		this->a2 = a2;
	}
	void show()
	{
		std::cout << a1 << "\t" << a2 << std::endl;
	}
	//void  f1(int a1, std::string a2)
	//{
	//	//只要说明作用域即可
	//	/*(*this).a1 = a1;
	//	(*this).a2 = a2;
	//	A::a1 = a1;
	//	this->a2 = a2;*/
	//	//a1, a2都是形参，对成员变量a1，a2没有影响
	// 不加修饰使用a1和a2,屏蔽了成员变量a1和a2
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