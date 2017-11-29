#include<iostream>
#include<memory>
#include<string>

using namespace std;

//两个结构体
struct destination 
{
	string strD;
	int intD;
	destination(string str, int i) :strD(str), intD(i) {}
};
struct connection
{
	string strC;
	int intC;
	connection(string str, int i) :strC(str), intC(i) {}
};


connection connect(destination* des)
{
	cout << "Have created a connection to destination" << endl;
	return [des]() {return *(shared_ptr<connection>(new connection(des->strD, des->intD))); }();
	//函数调用结束时，shared_ptr<connection>就会destroyed，其管理的内存也被释放
}
void disconnect(connection con) 
{
	cout << "connection is close" << endl;
}
void end_connection(connection* con)
{
	disconnect(*con);
}
void foo(destination& d)
{
	connection c = connect(&d);
	//12-14:use end_connection function as a callable object
	/*the build-in pointer c initialize samrt pointer p，将内存进一步转交给p管理，
	若出现异常，智能指针将其管理的 指针值 传给可调用对象end_connection，释放内存
	*/
	//shared_ptr<connection> p(&c, end_connection);
	//12-15:use a lambda expression in place of end_connection
	//这里的情况是： p接管了一块非动态分配的内存（存在栈中），在可调用对象中，切记不能delete the memory p points
	shared_ptr<connection> p(&c, [](connection* p) { disconnect(*p); });
	cout << "Now connection counter :" << p.use_count() << endl;
}
int main()
{
	destination d("sixsixsix", 666);
	foo(d);
	return 0;
}