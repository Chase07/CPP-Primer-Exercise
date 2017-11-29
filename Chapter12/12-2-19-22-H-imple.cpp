#include"12-2-19-22.h"

using namespace::std;
/*----------------------------------------Class StrBolb-----------------------------------------------*/
//Public Part:
StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}
StrBlob::size_type StrBlob::size() const { return data->size(); }
bool StrBlob::empty() const { return data->empty(); }
void StrBlob::push_back(const string& t) { data->push_back(t); }
void StrBlob::pop_back() 
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();

}
string& StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();

}
const string& StrBlob::front() const
{
	check(0, "const front on empty StrBlob");
	return data->front();
}
string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();

}
const string& StrBlob::back() const
{
	check(0, "const back on empty StrBlob");
	return data->back();
}
StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()
{
	return StrBlobPtr(*this, data->size());
}
//Private Part:
void StrBlob::check(size_type i, const string& msg) const 
{
	if (i >= data->size())
		throw out_of_range(msg);
}
/*---------------------------------------Class ConstStrBolbPtr---------------------------------------------*/
//Public Part:
ConstStrBlobPtr::ConstStrBlobPtr() :curr(0) {}
ConstStrBlobPtr::ConstStrBlobPtr(const StrBlob& a, std::size_t sz) : wptr(a.data), curr(sz) {}

bool ConstStrBlobPtr::operator!=(ConstStrBlobPtr& p) const { return p.curr != curr; }
void ConstStrBlobPtr::operator++() { this->incr(); }
const string& ConstStrBlobPtr::deref() const
{
	//In the body of const member funtion, we call the other member function with qualifier const   
	auto p = check(curr, "dereference past end");
	return (*p)[curr];

}
ConstStrBlobPtr& ConstStrBlobPtr::incr()
{
	check(curr, "increment past the end of StrBlobPtr");
	++curr;
	return *this;
}
//Private Part:
std::shared_ptr<std::vector<std::string>> ConstStrBlobPtr::check(std::size_t index, const std::string& msg) const
{
	auto tmPtr = wptr.lock();

	if (!tmPtr)
		throw runtime_error("unbound StrBolbPtr");
	if (index > tmPtr->size())
		throw out_of_range(msg);
	return tmPtr;
}
/*---------------------------------------Class StrBolbPtr---------------------------------------------*/
//Public Part:
StrBlobPtr::StrBlobPtr() :curr(0) {}
StrBlobPtr::StrBlobPtr(StrBlob& a, std::size_t sz) : wptr(a.data), curr(sz) {}

string& StrBlobPtr::deref() 
{
	//In the body of const member function, we call the other member function with qualifier const   
	auto p = check(curr, "dereference past end");
	return (*p)[curr];

}
StrBlobPtr& StrBlobPtr::incr()
{
	check(curr, "increment past the end of StrBlobPtr");
	++curr;
	return *this;
}
bool StrBlobPtr::operator!=(const StrBlobPtr& p) { return p.curr != curr; }
void StrBlobPtr::operator++() { this->incr(); }
//Private Part:
shared_ptr<vector<string>> StrBlobPtr::check(size_t index, const string& msg)
{
	auto tmPtr = wptr.lock();//Check if the vector is still around?

	if (!tmPtr)
		throw runtime_error("unbound StrBolbPtr");
	if (index >= tmPtr->size())
		throw out_of_range(msg);
	// The vector is still around and the index is legal, than return tmPtr
	return tmPtr;

}
