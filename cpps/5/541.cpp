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
		cout << "�������ĵ���";
	else
		cout << "����" << sout << "����������" << iout << "��";
}