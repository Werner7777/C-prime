#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool comperasion(string s) {
	return s.size() >= 5;
}

int main() {
	vector<string> vec{ "Werner", "sss","Gridman" };
	partition(vec.begin(), vec.end(), comperasion);
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;
}