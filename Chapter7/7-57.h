#ifndef _7_57_H
#define _7_57_H
#include<string>
#include<vector>
class Account
{
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	inline static void setRate(double newRate);
	
private:
	std::string owner;
	double amount;
	static double interestRate;//这里仅是声明了interestRate是Account的成员，尚未被定义和初始化
	inline static double initRate();
	static constexpr int period = 30;//仅仅是初始化period(类内初始化)
	static std::vector<double> vec;//仅仅是声明
};
std::vector<double> Account::vec(period);//定义并初始化vec的维度
constexpr int Account::period;//仅仅是定义period
double Account::interestRate = initRate();//定义并初始化interestRate
inline double Account::initRate()
{
	return 3.14;
}
inline void Account::setRate(double newRate)
{
	interestRate = newRate;
}
#endif //_7_57_H
