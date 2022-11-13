#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main() {
	ifstream ifs("book.txt");
	vector<string> vec;
	string s;
	while (ifs >> s) {
		vec.push_back(s);
	}
	for (const auto& i : vec)
		cout << i << ends;
}