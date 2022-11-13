#include<iostream>
#include<vector>

using namespace std;

int main() {
	int x[10]; int* p = x; int i = 1;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
	cout << sizeof(x) << endl;
}