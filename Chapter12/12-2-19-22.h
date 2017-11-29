#ifndef _12_2_19_H
#define _12_2_19_H

#include<string>
#include<vector>
#include<initializer_list>
#include<memory>

class StrBlob
{
friend class StrBlobPtr;
friend class ConstStrBlobPtr;
public:
	using size_type = std::vector<std::string>::size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const;
	bool empty() const;
	void push_back(const std::string& t);
	void pop_back();
	std::string& front();
	const std::string& front() const;
	std::string& back();
	const std::string& back() const;
	StrBlobPtr begin();
	StrBlobPtr end();

private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string& msg) const;
};

class ConstStrBlobPtr
{
public:
	ConstStrBlobPtr();
	ConstStrBlobPtr(const StrBlob&, std::size_t sz = 0);//以const StrBlob&为参数可以使非const StrBlob&初始化ConstStrBlobPtr 
	const std::string& deref() const;
	ConstStrBlobPtr& incr();
	bool operator !=(ConstStrBlobPtr& p) const;
	void operator ++();
private:
	// Member variable
	std::weak_ptr<std::vector<std::string>> wptr;
	std::size_t curr;
	// Member function
	std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
};

class StrBlobPtr
{
public:
	StrBlobPtr();
	StrBlobPtr(StrBlob&, std::size_t sz = 0);
	std::string& deref();
	StrBlobPtr& incr();
	bool operator !=(const StrBlobPtr& p);
	void operator ++();
private:
	std::weak_ptr<std::vector<std::string>> wptr;
	std::size_t curr;
	std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&);
};

#endif//_12_2_19_H