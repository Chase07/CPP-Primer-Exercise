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
	static double interestRate;//�������������interestRate��Account�ĳ�Ա����δ������ͳ�ʼ��
	inline static double initRate();
	static constexpr int period = 30;//�����ǳ�ʼ��period(���ڳ�ʼ��)
	static std::vector<double> vec;//����������
};
std::vector<double> Account::vec(period);//���岢��ʼ��vec��ά��
constexpr int Account::period;//�����Ƕ���period
double Account::interestRate = initRate();//���岢��ʼ��interestRate
inline double Account::initRate()
{
	return 3.14;
}
inline void Account::setRate(double newRate)
{
	interestRate = newRate;
}
#endif //_7_57_H
