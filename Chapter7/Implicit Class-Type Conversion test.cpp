#include"7-21.h"
#include<string>
using namespace::std;

int main()
{
	Sales_data item1;
	Sales_data item2;
	string null_book = "666";
	item1.combine(item2);
	/* ���ڲ���null_book��compiler�ȹ���һ����ʱ��
	** Sales_data�࣬
	** ��ԱbookNo��ʼ��Ϊnull_book�������Ա����ʹ�ø�����
	** Ĭ�ϳ�ʼֵ����ʼ���������Ϊһ��ת�����̣�����������ֻ
	** ����һ����
	*/
	item1.combine(null_book);//�Ӷ��������Ǵ�string�ൽSales_data�����ʽ������ת��
	
	item1.combine(string("666"));//��ʾת����666��Ϊstring�֮࣬��ͬ��
	item1.combine(Sales_data("666"));//��ʽ������һ��Sales_data��ʱ���󣨡�666����ʽת����string�ࣩ
	item1.combine("666");/*Error����Ϊ������������ʽת����
	** �ȰѲ�����666��תΪstring�࣬��ִ��string�ൽSales_data
	** ���ת��
	*/
	Sales_data item3 = null_book;
	Sales_data item4(null_book);//explicit constructorֻ����������ʽ��ʼ��һ������
	/*��������ʽ����ת��������*/
	item1.combine(Sales_data(null_book));//ֱ��ʹ�ù��캯����ʽ�ؽ�����ת��
	item1.combine(static_cast<Sales_data>(cin));//ֱ��ʹ��istream ���캯��ȥ������һ����ʱ��Sales_data����
	return 0;
}