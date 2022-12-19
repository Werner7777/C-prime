#include<iostream>
#include<cctype>
using namespace std;

int main() {
	string s1, s2;
	int i = 0;
	while (cin >> s1) {
		if (s2 == s1) 
			if (isupper(s1[0])){
				cout << s1;
				i = 1;
				break;
			}
		s2 = s1;
	}

	if (i == 0)
		cout << "没有单词连续出现";
}