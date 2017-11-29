#include"7-21.h"
#include<string>
using namespace::std;

int main()
{
	Sales_data item1;
	Sales_data item2;
	string null_book = "666";
	item1.combine(item2);
	/* 对于参数null_book，compiler先构造一个临时的
	** Sales_data类，
	** 成员bookNo初始化为null_book，其余成员数据使用给定的
	** 默认初始值来初始化（若理解为一个转换过程，则整个过程只
	** 包含一步）
	*/
	item1.combine(null_book);//从而看起来是从string类到Sales_data类的隐式类类型转换
	
	item1.combine(string("666"));//显示转换“666”为string类，之后同上
	item1.combine(Sales_data("666"));//显式构造了一个Sales_data临时对象（“666”隐式转换成string类）
	item1.combine("666");/*Error，因为包含了两步隐式转换：
	** 先把参数“666”转为string类，再执行string类到Sales_data
	** 类的转换
	*/
	Sales_data item3 = null_book;
	Sales_data item4(null_book);//explicit constructor只能用这种形式初始化一个对象
	/*下面是显式进行转换的例子*/
	item1.combine(Sales_data(null_book));//直接使用构造函数显式地进行了转换
	item1.combine(static_cast<Sales_data>(cin));//直接使用istream 构造函数去构造了一个临时的Sales_data对象
	return 0;
}