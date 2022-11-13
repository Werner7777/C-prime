#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main() {
	bool b;
	list<int> lst{ 1, 2, 3 };
	vector<int> v1;
	vector<int> v2(v1);
	vector<int> v3{ 1, 2, 3 };
	vector<double> v4(lst.begin(), lst.end());
	vector<int> v5(3);
	vector<int> v6(3, 5);
	if (*lst.begin()==v3[0])
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	cout << b << endl;
}