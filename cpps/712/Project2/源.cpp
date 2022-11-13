#include<iostream>

using namespace std;

struct Person
{
	string name;
	string address;

	string returnName() const { return name; }
	string returnAddress() const { return address; }
};