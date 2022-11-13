#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	vector<string> vec{ "123.526", "456", "789" };
	float i = 0;
	for (auto& j : vec) {
		i += stof(j);
	}
	cout << i << endl;
}