#include<iostream>
#include<list>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<int> vec{ 1, 2, 3, 1, 2, 3 };
	list<int> lst(6);
	unique_copy(vec.begin(), vec.end(), lst.begin());
	for (auto i : lst)
		cout << i << " ";
	cout << endl;
}