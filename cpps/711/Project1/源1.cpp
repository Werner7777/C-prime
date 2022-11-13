#include<iostream>
#include<string>

using namespace std;

struct Sales_date
{
	int isbn;
};

int main() {
	Sales_date total;
	if (cin >> total) {
		Sales_date trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans;
			else {
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
}