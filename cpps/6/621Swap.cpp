#include<iostream>

using namespace std;

void sw(int * p1, int* p2) {
	int ival = *p1;
	*p1 = *p2;
	*p2 = ival;
}

int main() {
	int a = 0, b = 1;
	sw(&a, &b);
	cout << a << b << endl;
}