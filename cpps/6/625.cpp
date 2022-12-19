#include<iostream>
using namespace std;

void print(const char* c) {
	string str;
	while (*c)
	{
		str += *c++;
	}
	cout << str;
}

int main(int argc, char *argv[]) {
	for(int i = 1;i < argc;i++)
	print(argv[i]);
}