#include<iostream>
 
using namespace std;

int main() {
	do {
		cout << "����������string����" << endl;
		string s1, s2;
		cin >> s1 >> s2;
		if (s1.size() < s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
	} while (true);
}