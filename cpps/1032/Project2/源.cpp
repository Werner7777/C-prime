#include<iostream>
#include<vector>
#include<algorithm>
#include "Sales_data.h"
#include<string>

using namespace std;

void compareIsbn(vector<Sales_data>& words) {
	sort(words.begin(), words.end(), [](Sales_data& s1, Sales_data& s2) {
		return s1.isbn() > s2.isbn(); });
}

int main() {
	Sales_data book1("Jojo's bizzare adventure", 100, 200);
	Sales_data book2("Jojo's bizzare adventure2", 200, 300);
	vector<Sales_data> words{ book1, book2 };
	compareIsbn(words);
}