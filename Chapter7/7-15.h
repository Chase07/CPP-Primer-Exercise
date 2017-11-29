#ifndef _7_15_H
#define _7_15_H
#include<string>
class Person
{
public:
	std::string Person_Name;
	std::string Address_of_Person;
	Person() = default;
	Person(const std::string& Name, const std::string& Address) : Person_Name(Name), Address_of_Person(Address) {}
	Person(std::istream&);

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
Person::Person(std::istream& input)
{
	read(input, *this);
}
#endif
