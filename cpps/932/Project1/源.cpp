#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vec;
	auto &v1 = vec.at(1);
	auto &v2 = vec[0];
	auto &v3 = vec.front();
	auto &v4 = *vec.begin();
	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;
	cout << v4 << endl;

}