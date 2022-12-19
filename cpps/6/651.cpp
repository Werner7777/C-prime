#include<iostream>

using namespace std;

string make_plural(size_t ctr, const string& word, const string& ending = "s") {
	return(ctr > 1) ? word + ending : word;
}

int main() {
	string c1;
	cin >> c1;
	cout << make_plural(c1.size(), c1) << endl;
}