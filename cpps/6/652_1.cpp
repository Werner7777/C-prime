#include<iostream>

using namespace std;

inline bool isShorter(const string& s1, const string& s2) {
	return s1.size() < s2.size();  
}

int main() {
	const string s1 = "WERN", s2 = "ER";
	cout << isShorter(s1, s2);
}