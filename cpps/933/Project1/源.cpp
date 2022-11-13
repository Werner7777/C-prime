#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vec{1, 2, 3};
	vec.erase(--vec.end(), vec.end());
	for (auto& i : vec)  cout << i << ends;

}