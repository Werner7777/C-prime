#include<iostream>

using namespace std;

istream& Test(istream& is) {
	string c;
	while (is)
	{
		is >> c;
		cout << c << " " << ends;
	}
	cout << endl;
	is.clear(is.rdstate());
	return is;
}

int main() { 
	Test(cin);
}