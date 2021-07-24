#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

int main() {
	ifstream ifs("book.txt");
	string s;
	vector<string> vec;
	while (ifs >> s) {
		vec.push_back(s);
	}
	for (auto& i : vec) {
		istringstream is(i);
		cout << i << ends;
	}
}