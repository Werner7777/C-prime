#include<iostream>

using namespace std;

void print(const int ia[10]) {
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}

int main() {
	int i[10] = {};
	print(i); 
}