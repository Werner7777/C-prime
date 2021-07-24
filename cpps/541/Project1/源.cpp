#include<iostream>

using namespace std;

int main() {
	string s, a, sout;
	int ival = 1, iout = 0 ;
	while (cin >> s)
	{
		(s == a) ? (++ival) : (iout = ival, ival = 1);
		a = s;
		if (ival > 1)
			sout = s;
		else if (s == "oo")
			break;
	}
	if (sout.empty())
		cout << "无这样的单词";
	else
		cout << "单词" << sout << "连续出现了" << iout << "次";
}