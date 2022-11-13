#include<iostream>
#include<vector>

using namespace std;
/*
int main() {
	vector<string> vec{ "F", "D", "C" ,"B", "A", "A++" };
	int grade;
	int lettergrade;

	cin >> grade;

	if (grade < 60)
	lettergrade = 0;
	else
	lettergrade = (grade - 50) / 10;
	cout << vec[lettergrade] << endl;
}
*/

int main() {
	vector<string> vec{ "F", "D", "C" ,"B", "A", "A++" };
	int grade;
	int lettergrade;

	cin >> grade;

	(grade < 60)? (lettergrade = 0) : (lettergrade = (grade - 50) / 10);

	cout << vec[lettergrade] << endl;
}