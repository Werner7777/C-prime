#include<iostream>

using namespace std;

class Person
{
friend istream& read(istream& is, Person& people);
friend ostream& print(ostream& os, Person& people);

public:
	Person(string s1, string s2) :name(s1), address(s2) {}
	Person() = default;
	Person(istream&);

	string returnName() const { return name; }
	string returnAddress() const { return address; }

private:
	string name;
	string address;


};

istream& read(istream& is, Person& people);
ostream& print(ostream& os, Person& people);

istream& read(istream& is, Person& people) {
	is >> people.name >> people.address;
	return is;
}

ostream& print(ostream& os, Person& people) {
	os << people.name << people.address;
	return os;
}

Person::Person(istream& s1) { read(cin, *this); }

int main() {

}