#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<deque>

using namespace std;

int main() {
	vector<int> vec;
	deque<int> vecCop1, vecCop2, vecCop3;
	int i;
	while (cin >> i)
	{
		vec.push_back(i);
	}
	copy(vec.cbegin(), vec.cend(), back_inserter(vecCop1));
	copy(vec.cbegin(), vec.cend(), front_inserter(vecCop2));
	vecCop3.insert(vecCop3.cbegin(), vec.cbegin(), vec.cend());
	for (auto& i : vecCop1) cout << i << " ";
	cout << endl;
	for (auto& i : vecCop2) cout << i << " ";
	cout << endl;
	for (auto& i : vecCop3) cout << i << " ";
	cout << endl;
}
