#include<iostream>

using namespace std;

string add(string name, string prefix, string suffix) {
	name.reserve(name.size() + prefix.size() + suffix.size());
	name.insert(0, prefix);
	name.insert(name.size(), suffix);
	return name;
}

int main() {
	string Jett{"Jett"};
	string pre1{ "Mr." };
	string suf1{ "Jr." };
	Jett = add(Jett, pre1, suf1);
	cout << Jett << endl;
}