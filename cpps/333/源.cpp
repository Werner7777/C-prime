#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	int s;
	while (cin >> s ) {
		v.push_back(s);
		if (s != 10)
			v.push_back(s);
		else
			break;
	}
	for (int i = 0; i < v.size() && i < v.size() / 2; i++) {
		int sum = v[i] + v[v.size() - i - 1];
		cout << sum << endl;
	}
}