#include<iostream>
#include<string>

using namespace std;

struct Sales_date
{
	unsigned units_sold;
	double revenue;
	string bookNo;

	string isbn() const { return bookNo; }
	Sales_date& combine(const  Sales_date& rhs) {
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

};

istream& read(istream& is, Sales_date& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
ostream& print(ostream& os, Sales_date& item) {
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " "; //<< item.avg_price();
	return os;
}
Sales_date add(Sales_date& lhs, Sales_date& rhs) {
	Sales_date sum = lhs;
	sum.combine(rhs);
	return sum;
}

int main() {
	Sales_date total;
	if (read(cin, total)) {
		Sales_date trans;
		while (read(cin, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else {
		cerr << "No data?!" << endl;
	}
}