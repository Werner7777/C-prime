#include<iostream>
#include<map>
#include<vector>
#include<iterator>

using namespace std;

int main() {
	string s("Werner");
	vector<int> vec{ 6, 5, 4 };
	map<string, vector<int>> m;
	m[s] = vec;
	auto mit = m.find(s);
	//pair<string, vector<int>>::iterator mit = m.find(s);
}