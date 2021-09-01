#include<iostream>
#include<map>
#include<set>

using namespace std;

int main() {
	map<string, size_t> word_count;
	set<string > exclude = { "." };
	string word;
	while (cin >> word) {
		for (auto& w1 : word)
			if (w1 >= 'A' && w1 <= 'Z')
			{
				w1 += 32;
			}
		++word_count[word];
	}
	for (const auto &w1 : word_count)
    cout << w1.first << " occurs " << w1.second
		<< ((w1.second > 1) ? " times" : " time") << endl;
} 
