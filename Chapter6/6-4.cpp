#include<iostream>

using namespace::std;

void factorial_and_interacts()
{
	int a; //����unsigned������Ϊ���޷�����û��Ƿ����븺��
	cout << "Please input a postive number:";
	while (cin >> a && a < 0)
		cout << "Please input a postive number:";
	unsigned long long result = 1;//���ʹ��unsigned������Ϊ�˷�������if�ж�
	while(a > 1)
		result *= a--;//result�Ľ��һ���������͵ķ�Χ������ת�ã�result��Ϊ0��
	if (result)//����unsigned���ͷǸ������ԣ������ж�
		cout << endl << "The result" << a << " is " << result << endl;
	else
		cout << endl<< "The result is too big !" << endl;

}


int main()
{
	factorial_and_interacts();

	return 0;
}