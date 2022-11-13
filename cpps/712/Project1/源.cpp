#include<iostream>
#include<string>

using namespace std;

struct Sales_date
{
	unsigned units_sold = 6598;
	double revenue = 65981130;
	string bookNo = "65981130";
	string isbn() const { return bookNo; }
	Sales_date& combine(const  Sales_date& rhs) {
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

};

int main() {
	Sales_date total;
	if (1) {
		Sales_date trans;
		while (1) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
			}
		}
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
}