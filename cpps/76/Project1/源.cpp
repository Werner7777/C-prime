#include<iostream>

using namespace std;

class Account {
public:
	static double rate() { return interestRate; }
	static void rate(double);
private:
	static constexpr int period = 30;
	double daily_tbl{ period };
	static double  interestRate;
};

void Account::rate(double newRate) {
	interestRate = newRate;
}

constexpr int Account::period;
double Account::rate() {}