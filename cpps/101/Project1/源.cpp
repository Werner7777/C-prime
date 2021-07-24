#include<iostream>
#include<algorithm>
#include<string>
#include<list>

using namespace std;

int main() {
	list<string> lst{"WERNER", "AND", "WERNER"};
	int i = count(lst.begin(), lst.end(), "WERNER");
	cout << i << endl;
}