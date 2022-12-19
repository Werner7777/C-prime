#include<iostream>

using namespace std;
/*
int fuc(int a, int* b) {
	if (a > *b)
		return a;
	else
		return *b;
}

int main() {
	int a = 1;
	int b = 0;
	cout << fuc(a, &b) << endl;
}
*/
void fuc2(int** a, int** b) {
	int* c = *a;
	*a = *b;
	*b = c;
}

int main() {
	int a = 0, b = 1;
	int* p1 = &a, * p2 = &b;
	fuc2(&p1, &p2);
	cout << *p1 << *p2;
}