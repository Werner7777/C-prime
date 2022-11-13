#include<iostream>
#include<map>
#include<set>
#include<vector>

using namespace std;

int main() {
	multimap<string, vector<string>> family;
	string judge;
	cout << "input new family y/n?";
	cin >> judge;
	string familyname;
	if (judge == "yes") {
		cin >> familyname;
	}
	else
	{
		familyname = "john";
	}
	vector<string> n;
	string name;
	while (cin >> name)
	{
		n.push_back(name);
	} 
	if(family.find(familyname)==family.end())
	cout << "bad";

} 