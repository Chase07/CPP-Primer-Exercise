#ifndef _7_9_H
#define _7_9_H
#include<string>
class Person
{
public:
	std::string Person_Name;
	std::string Address_of_Person;
	const std::string& Show_Name() const { return Person_Name; }
	const std::string& Show_Address() const { return Address_of_Person; }

};
std::istream& read(std::istream& input, Person& np)
{
	
	input >> np.Person_Name >> np.Address_of_Person;
	return input;
}
std::ostream& print(std::ostream& output, const Person& ap)
{
	output << ap.Person_Name << " lives on " << ap.Address_of_Person;
	return output;
}
#endif
