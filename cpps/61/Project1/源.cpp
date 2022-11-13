#include<iostream>

using namespace std;

int fact(int ival) {
	int jval = 1;
	while (ival != 1) {
		jval *= ival--;
	}
	return jval;
}

int main() {
	int kval = fact(5);
	cout << kval << endl;
}