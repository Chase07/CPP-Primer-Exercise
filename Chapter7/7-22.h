#ifndef _7_22_H
#define _7_22_H
#include<string>
class Person
{
	friend std::istream& read(std::istream&, Person&);
	friend std::ostream& print(std::ostream&, const Person&);
public:
	Person() = default;
	Person(const std::string& n, const std::string& a) : Person_Name(n), Address_of_Person(a) {}
	Person(std::istream& input) { read(input, *this); }

	const std::string& Show_Name() const { return Person_Name; }
	const std::string& Show_Address() const { return Address_of_Person; }
private:
	std::string Person_Name;
	std::string Address_of_Person;
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
