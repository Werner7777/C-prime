#include<iostream>

using namespace std;

struct Person
{
	string name;
	string address;

	string returnName() const { return name; }
	string returnAddress() const { return address; }
};

istream& read(istream& is, Person& people) {
	is >> people.name >> people.address;
	return is;
}

ostream& print(ostream& os, Person& people) {
	os << people.name << people.address;
	return os;
}