#include<iostream>
#include<string>

using namespace std;

struct Sales_date
{
	Sales_date() = default;
	Sales_date(const string& s) :bookNo(s) {}
	Sales_date(const string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p* n) {}
	Sales_date(istream&); 
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

Sales_date::Sales_date(istream& is) { read(is, *this); }

int main() {
	Sales_date total(cin);
	if (1) {
		Sales_date trans(cin);
		bool b = 0;
		while (b++ != 1) {
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

/*
int main() {
	Sales_date item("0598");
	Sales_date nextItem("1130", 20, 20);
	Sales_date thirdItem(cin);
	cout << item.bookNo << " " << endl;
	print(cout, nextItem);
	cout << endl;
	print(cout, thirdItem);
}
*/