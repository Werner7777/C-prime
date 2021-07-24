#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> vec{ 1,2,3,4 };
	for (auto& a : vec) {
	    a = a * ((a % 2 == 0) ? 1 : 2);
		cout << a << ' ';
	}
}