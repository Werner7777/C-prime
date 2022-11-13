#include<iostream>
#include<vector>
#include<algorithm>
#include "Sales_data.h"
#include<string>
#include<numeric>

using namespace std;

bool isShorter(Sales_data& s1, Sales_data& s2) {
	return s1.isbn() > s2.isbn();
}

void compareIsbn(vector<Sales_data>& words) {
	sort(words.begin(), words.end(), isShorter);
}

int main() {
	Sales_data book1("1253", 200, 300), book2("1253", 200, 300);
	vector<Sales_data> book{book1, book2};
	compareIsbn(book);
	vector<Sales_data>::iterator book_iter = book.begin();
	while (book_iter!=book.end())
	{
		auto bookLatter_iter = find_if(book_iter, book.end(),
			[book_iter](Sales_data& s) {return s.isbn() != (*book_iter).isbn(); });
		double sum = accumulate(book_iter, bookLatter_iter, double(0), 
			[](double a, Sales_data s) {return a + s.revenue; });
		book_iter = bookLatter_iter;
		cout << sum << endl;
	}
}