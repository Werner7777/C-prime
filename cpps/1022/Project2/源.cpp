#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> vec;
	vec.reserve(10);
	fill_n(vec.begin(), 10, 0);
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;
}