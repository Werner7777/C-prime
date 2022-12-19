#include<iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

int main() {
	char c1[] = { "Werner" }, c2[] = { "Werner" }, c3[15];
	strcpy(c3, c1);
	strcat(c3, " ");
	cout << c3 << endl;
	if (abs(strcmp(c1, c2)))
		cout << "����char����ͬ" << endl;
	else
		cout << "����char������ͬ" << endl;
}