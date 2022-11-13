#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main() {
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vec(begin(ia),end(ia));
	list<int> lst(begin(ia), end(ia));
	auto it1 = vec.begin();
	auto it2 = lst.begin();

	while(it1!=vec.end()) {
		if (*it1 % 2) it1 = vec.erase(it1);
		else ++it1;
	}

	while (it2 != lst.end()) {
		if (!(*it2 % 2)) it2 = lst.erase(it2);
		else ++it2;
	}

	for (auto& i : vec) cout << i << " ";
	cout << endl;
	for (auto& i : lst) cout << i << " ";
	cout << endl;
}