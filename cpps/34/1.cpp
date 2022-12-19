#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		*it = *it * 2;
		cout << *it << " ";
	}
	cout << endl;
}
