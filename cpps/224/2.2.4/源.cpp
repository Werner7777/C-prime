#include <iostream>
#include<vector>
using namespace std;
int main()
{
	string s;
	vector<string> v;
	while (cin >> s) {
		v.push_back(s);
		if (s == "0")
			break;
	}
	for (auto i : v) {
		if (i != "0") {
			for (auto& j : i)
				j = toupper(j);
			cout << i << endl;
		}
	}
}