#include<iostream>
#include<vector>
#include <cassert>

using namespace std;

void pr(vector<int> vec, int i) {
	cout << vec[i++] << endl;
	assert(0);
	if (i != vec.size()) {
		pr(vec, i);
	}
}

int main() {
	vector<int> vec{ 0, 1, 2, 3 };
	int i = 0;
	pr(vec, i);
}