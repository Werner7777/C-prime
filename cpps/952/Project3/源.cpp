#include<iostream>

using namespace std;

void find1(string s) {
	int pos{ 0 };
	string ar{ "1234567890" };
	while ((pos = s.find_first_of(ar, pos))
		!= string::npos) {
		cout << s[pos];
		++pos;
	}
}

void find2(string s) {
	int pos{ 0 };
	string ar{ "123456789" };
	while ((pos = s.find_first_not_of(ar, pos))
		!= string::npos) {
		cout << s[pos];
		++pos;
	}
}

int main() {
	string s{ "ab2c3d7R4E6" };
	find1(s);
	find2(s);
}