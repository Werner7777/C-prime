#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;
using namespace placeholders;

bool check_size(const int& s, string::size_type sz) {
	return s > sz;
}


void checkInt(const vector<int>& vec, const string& s) {
	auto sz = s.size();
	auto out = find_if(vec.begin(), vec.end(), bind(check_size, _1, sz));
	cout << *out << endl;
}

int main() {
	vector<int> vec{ 1, 2, 3, 4, 5, 6 , 7, 8};
	string s("Werner");
	checkInt(vec, s);
}