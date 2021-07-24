#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> vec1{ 0, 1, 2 }, vec2{ 0, 1, 2, 3, 4, };
	decltype(vec1.size()) sz, j = 0;
	vec1.size() <= vec2.size() ? (sz = vec1.size()) : (sz = vec2.size());

	for (decltype(vec1.size()) i = 0; i != sz; ++i) {
		if (vec1[i] == vec2[i])
			j += 1;
		else
			break;
	}

	if (j == sz) {
		if (sz == vec1.size())
			cout << "vec1为vec2的前缀" << endl;
		else
			cout << "vec1为vec2的前缀" << endl; 
	}
}