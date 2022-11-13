#include<iostream>
#include<vector>

using namespace std;

int main() {
	int a[] = { 0, 1, 2 };
	vector<int> vec(begin(a), end(a));
	int b[3];
	for (int i = 0; i < vec.size(); i++) {
		vec[i] = b[i];
		cout << vec[i] << " " << b[i] << endl;
	}
}