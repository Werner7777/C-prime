#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
	string s;
	list<string> d;
	while(cin >> s)
	d.push_back(s);
	for (const auto& i : d)
		cout << i << ends;
	
}