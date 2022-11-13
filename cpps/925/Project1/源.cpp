#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main() {
	list<string> lst{ "1", "2", "3" };
	vector<string> vec;
	vec.assign(lst.begin(), lst.end());
}