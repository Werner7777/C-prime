#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void elimDups(list<string>& words) {
	words.sort();
	words.unique();
}

int main() {
	list<string> words{ "Werner", "sss", "gridman" };
	elimDups(words);
	ostream_iterator<string> ost(cout, " ");
	copy(words.begin(), words.end(), ost);
}