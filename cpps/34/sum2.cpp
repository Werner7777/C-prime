#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	int s;
	while (cin >> s) {
		v.push_back(s);
		if (s != 10)
			v.push_back(s);
		else
			break;
	}

	auto j = v.cend();

	for (auto it = v.begin(); it < j; ++it){
		cout << *it + *j << endl;
		--j;
	}
}