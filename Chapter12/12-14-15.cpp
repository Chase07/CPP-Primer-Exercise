#include<iostream>
#include<memory>
#include<string>

using namespace std;

//�����ṹ��
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
	//�������ý���ʱ��shared_ptr<connection>�ͻ�destroyed���������ڴ�Ҳ���ͷ�
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
	/*the build-in pointer c initialize samrt pointer p�����ڴ��һ��ת����p����
	�������쳣������ָ�뽫������ ָ��ֵ �����ɵ��ö���end_connection���ͷ��ڴ�
	*/
	//shared_ptr<connection> p(&c, end_connection);
	//12-15:use a lambda expression in place of end_connection
	//���������ǣ� p�ӹ���һ��Ƕ�̬������ڴ棨����ջ�У����ڿɵ��ö����У��мǲ���delete the memory p points
	shared_ptr<connection> p(&c, [](connection* p) { disconnect(*p); });
	cout << "Now connection counter :" << p.use_count() << endl;
}
int main()
{
	destination d("sixsixsix", 666);
	foo(d);
	return 0;
}