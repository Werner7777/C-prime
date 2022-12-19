#include<iostream>

using namespace std;

void f() {};
void f(int i) {cout << i << endl;};
void f(int i, int j) {cout << i << " " << j << endl;};
void f(double i, double j= 3.14) {cout << i << " " << j << endl;};

int main() {
	//f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
}