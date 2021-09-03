#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<iterator>

using namespace std;

int main() {
	
	map<string, int> m;
	m["Werner"] = 2;
	auto map_it = m.begin();
	map_it->second = 2;
	set<string> c("a", "b");
	vector<string> v("a", "b");
	auto vv = m.begin();
	copy(v.begin(), v.end(), back_inserter(c));

}