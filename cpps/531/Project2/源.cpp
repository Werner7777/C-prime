#include<iostream>
#include<vector>

using namespace std;

int main() {
	if (int ival = get_value())
		cout << "ival = " << ival << endl;
	if (!ival)
		cout << "ival = 0\n"; 
}