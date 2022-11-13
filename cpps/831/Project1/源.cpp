#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

istringstream& Test(istream& ist) {
	string c;
	getline(ist, c);
	istringstream is(c);
	if (is)
	{
		cout << c << " " << ends;
	}
	cout << endl;
	is.clear(is.rdstate());
	return is;
}

int main() {
	Test(cin);
}

/*
struct PersonInfo {
	string name;
	vector<string> phones;
}; 
int main() {
	string line, word;
	vector<PersonInfo> people;
	while (getline(cin, line)) {
		PersonInfo info;
		istringstream record(line);
		record >> info.name;
		while (record >> word)
		{
			info.phones.push_back(word);
			people.push_back(info);
		}
	}
}
*/