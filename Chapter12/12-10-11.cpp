#include<iostream>
#include<memory>

using namespace::std;

void process(shared_ptr<int> ptr)
{
	cout << "counter: " << ptr.use_count() << endl;
}
int main()
{
	
	shared_ptr<int> p(new int(666));
	cout << "counter: " << p.use_count() << endl;
	//12-10��
	//process(shared_ptr<int>(p));//�˴�������һ�����ô���
	////���ý���֮����ʱ������ָ�뱻���٣����ô����ּ���һ��
	//cout << "counter: " << p.use_count() << endl;

	//12-11��
	process(shared_ptr<int>(p.get()));
	cout << "counter: " << p.use_count() << endl;
	/*����main����֮��smart pointer p ���ͷ��ڴ棬������ָ����ڴ��Ѿ���process()�б��ͷţ������ִ���*/
	process(new int());//error:a plain pointer can't implicitly convert to a smart pointer 
	return 0;
	
}