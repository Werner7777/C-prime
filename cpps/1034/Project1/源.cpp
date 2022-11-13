#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<functional>

using namespace std;
using namespace placeholders;

void elimDups(vector<string>& words) {
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

string make_plural(int c, string s, char ending) {
	return c > 1 ? s + ending : s;
}

bool check_size(const string &a, vector<string>::size_type sz) {return a.size() > sz; }

void biggies(vector<string>& words, vector<string>::size_type sz) {
	elimDups(words);
	auto wc = stable_partition(words.begin(), words.end(), bind(check_size, _1, sz));
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", 's') <<
		" of length " << sz << " or langer" << endl;
	for_each(wc, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

int main() {
	vector<string> words{ "Werner", "sss", "gridman" };
	biggies(words, 6);
}