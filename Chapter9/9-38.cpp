//#include<iostream>
//#include<vector>
//#include<iterator>
//
//using namespace::std;
//
//int main()
//{
//	vector<int> vec1;
//	cout << "1." << vec1.size() << "\t" << vec1.capacity() << endl;
//	vec1 = { 1, 2, 3, 4 };
//	cout << "2." << vec1.size() << "\t" << vec1.capacity() << endl;
//	int x = 5;
//	vec1.push_back(x);
//	cout << "3." << vec1.size() << "\t" << vec1.capacity() << endl;
//	for (; vec1.size() != vec1.capacity(); vec1.push_back(++x)) {}
//	cout << "4." << vec1.size() << "\t" << vec1.capacity() << endl;
//	vec1.resize(3);
//	cout << "5." << vec1.size() << "\t" << vec1.capacity() << endl;
//	for (x = 3; vec1.size() != vec1.capacity(); vec1.push_back(++x)) {}
//	cout << "6." << vec1.size() << "\t" << vec1.capacity() << endl;
//	vec1.reserve(10);
//	cout << "7." << vec1.size() << "\t" << vec1.capacity() << endl;
//	for (x = 6; vec1.size() != vec1.capacity(); vec1.push_back(++x)) {}
//	for (auto& i : vec1)
//		cout << i << " ";
//	cout << endl;
//	cout << "8." << vec1.size() << "\t" << vec1.capacity() << endl;
//	vec1.push_back(7);
//	cout << "9." << vec1.size() << "\t" << vec1.capacity() << endl;
//	for (x = 11; vec1.size() != vec1.capacity(); vec1.push_back(++x)) {}
//	cout << "10." << vec1.size() << "\t" << vec1.capacity() << endl;
//	vec1.push_back(7);
//	cout << "11." << vec1.size() << "\t" << vec1.capacity() << endl;
//	for (auto& i : vec1)
//		cout << i << " ";
//	cout << endl;
//	for (x = 16; vec1.size() != vec1.capacity(); vec1.push_back(++x)) {}
//	cout << "12." << vec1.size() << "\t" << vec1.capacity() << endl;
//	vec1.push_back(7);
//	cout << "13." << vec1.size() << "\t" << vec1.capacity() << endl;
//	for (x = 23; vec1.size() != vec1.capacity(); vec1.push_back(++x)) {}
//	cout << "14." << vec1.size() << "\t" << vec1.capacity() << endl;
//	vec1.push_back(7);
//	cout << "15." << vec1.size() << "\t" << vec1.capacity() << endl;
//	return 0;
//}
#include <iostream>////////我比较服气答案的探索方法
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> v;
	std::string word;

	while (std::cin >> word) {
		v.push_back(word);
		std::cout << v.capacity() << "\n";
	}

	return 0;
}