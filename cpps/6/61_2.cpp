#include<iostream>

using namespace std;
/*
int fact(int ival) {
	int jval = 1;
	while (ival != 1) {
		jval *= ival--;
	}
	return jval;
}

int main() {
	int jval;
	cin >> jval;
	int kval = fact(jval);
	cout << kval << endl;
}
*/

int jdz(int ival) {
	int jval = abs(ival);
	return jval;
}

int main() {
	cout << jdz(-5) << endl;
}