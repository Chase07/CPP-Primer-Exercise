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
	//12-10：
	//process(shared_ptr<int>(p));//此处增加了一次引用次数
	////调用结束之后，临时的智能指针被销毁，引用次数又减少一次
	//cout << "counter: " << p.use_count() << endl;

	//12-11：
	process(shared_ptr<int>(p.get()));
	cout << "counter: " << p.use_count() << endl;
	/*结束main函数之后，smart pointer p 将释放内存，但它所指向的内存已经在process()中被释放，将出现错误*/
	process(new int());//error:a plain pointer can't implicitly convert to a smart pointer 
	return 0;
	
}