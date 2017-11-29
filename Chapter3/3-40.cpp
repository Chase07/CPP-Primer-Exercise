#include<iostream>
#include<cstring>
using namespace::std;

const char cstr2[] = { 'H', 'u', '\0' };
int main()
{
	const char cstr1[] = "A";
	constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
	char cstr3[new_size];

	strcpy(cstr3, cstr1);
	strcat(cstr3, " ");
	strcat(cstr3, cstr2);

	std::cout << cstr3 << std::endl;
	/*
	//此题的答案有错，from stack overflow 
	const char c1[] = "A";
	const char c2[] = "Fa";
	char c3[ 5 ];
	strcpy( c3, c1 );
	strcat( c3, c2 );
	c3[4] = '\0';
	cout << c3 << endl;*/
	return 0;
}