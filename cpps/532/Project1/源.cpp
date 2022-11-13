#include<iostream>
#include<cstdio>

using namespace std;
/*
int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spCnt = 0, tabCnt = 0, nCnt = 0;
	char ch;
	while (cin >> ch) {
		if (ch == 'a' || ch == 'A')
			++aCnt;
		else if (ch == 'e' || ch == 'E')
			++eCnt;
		else if (ch == 'i' || ch == 'I')
			++iCnt;
		else if (ch == 'o' || ch == 'O')
			++oCnt;
		else if (ch == 'u' || ch == 'U')
			++uCnt;
		else if (ch == ' ')
			++spCnt;
		else if (ch == '		')
			++tabCnt;
		else if (ch == '/n')
			++nCnt;
	}
}
*/
/*
int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spCnt = 0, tabCnt = 0, nCnt = 0;
	char ch;
	while (cin >> ch) {
		switch (ch)
		{
		case 'a' :
			++aCnt;
			break;
		case 'e':
			++eCnt;
			break;
		case 'i':
			++iCnt;
			break;
		case 'o':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		default:
			break;
		}
	}
}
*/

int main() {
	const unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned bufsize;
	unsigned swt = 512;
	switch (swt) {
	case ival:
		bufsize = ival * sizeof(int);
		break;
	}
}