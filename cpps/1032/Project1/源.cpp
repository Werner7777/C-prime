#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

void elimDups(vector<string>& words) {
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

string make_plural(int c, string s, char ending) {
	return c > 1 ? s + ending : s;
}
void biggies(vector<string>& words, vector<string>::size_type sz) {
	elimDups(words);
	stable_sort(words.begin(), words.end(),
		[](const string& a, const string& b) {return a.size() < b.size(); });
	auto wc = find_if(words.begin(), words.end(), [sz](const string& a)
		{return a.size() >= sz; });
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", 's') <<
		" of length " << sz << " or langer" << endl;
	for_each(wc, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

int main() {
	vector<string> words{ "Werner", "sss", "gridman" };
	biggies(words, 5);
}