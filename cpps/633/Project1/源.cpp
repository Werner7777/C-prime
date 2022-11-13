#include<iostream>

using namespace std;

string (*Test(string p[10]))[10] {
	static auto p2 = (&)p;
return p2; }

int main() {
	string p[10];
	Test(p);
}