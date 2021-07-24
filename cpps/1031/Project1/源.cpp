#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isShorter(const string& s1, const string& s2) {
	return s1.size() < s2.size();
}

void elimDups(vector<string>& words) {
	stable_sort(words.begin(), words.end(), isShorter);
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

int main() {
	vector<string> words{ "the", "quick", "the", "slow" };
	elimDups(words);
	for (auto& s : words)
		cout << s << " ";
	cout << endl;
}