#ifndef _7_5_H
#include<string>

class Person
{
	std::string Person_Name;
	std::string Address_of_Person;
public:
	const std::string& Show_Name() const { return Person_Name; }
	const std::string& Show_Address() const { return Address_of_Person; }
};
#endif