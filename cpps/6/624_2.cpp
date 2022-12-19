#include<iostream>

using namespace std;

void print1(const int cp[]) {
	cout << *cp << endl;
}
void print2(const int* beg,const int* end) {
		while (beg != end)
		{
			cout << *beg++ << " ";
		}
		cout << endl;
}
int main() {
	int i = 0, j[2] = { 0, 1 };
	print1(&i);
	print2(begin(j),end(j));
}