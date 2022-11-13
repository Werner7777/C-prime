#include<iostream>

using namespace std;

void print(const int cp[]) {
	if(cp)
		while (*cp)
		{
			cout << *cp++;
		}
}

int main() {
	int i = 0, j[2] = { 0, 1 };
	print(&i);
	print(j);
}