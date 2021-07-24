#include<iostream>

using namespace std;

void Test(string s, string &oldVal, string newVal) {
	oldVal.replace(oldVal.begin(), oldVal.end(), newVal);
}

int main() {
	string s1{ "tho" }, s2{ "though" }, s3{ "thru" }, s4{ "through" }, s5;
	Test(s5, s1, s2);
	Test(s5, s3, s4);
	cout << s1 << " " << s3 << endl;
}