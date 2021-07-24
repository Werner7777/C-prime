#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;

struct PersonInfo {
	string name;
	vector<string> phones;
};
int main() {
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	ifstream ifs("people.txt");
	while (ifs >>line) {
		PersonInfo info;
		record.str(line);
		record >> info.name;
		cout << line;
		while (record >> word)
		{
			info.phones.push_back(word);
			people.push_back(info);
		}
	}
}