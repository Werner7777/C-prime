#include<iostream>
#include<list>
#include<vector>

using namespace std;
int main() {
	string word;
	vector<string> vec;
	auto iter = vec.begin();
	while (cin >> word)
		iter = vec.insert(iter, word);
	for (const auto& i : vec)
		cout << i << ends;

}