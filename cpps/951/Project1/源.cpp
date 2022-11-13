#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	string s;
	s.reserve(100);
	vector<char> vec{'W', 'e', 'r', 'n', 'e', 'r'};
	for (auto& i : vec)
		s += i;
	cout << s << ends;
}