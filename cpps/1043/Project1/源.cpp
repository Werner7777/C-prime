#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main() {
	vector<int> vec{ 10, 1, 2, 3, 0, 4, 5, 6, 7, 8 };
	list<int> lst(5);
	find(vec.rbegin(), vec.rend(), 0);
	copy(vec.rbegin() + 3, vec.rend() - 2, lst.begin());
	for (auto& i : lst) cout << i << " ";
	cout << endl;
	for (auto i = vec.rbegin();  i< vec.rend(); i++)
	{
		cout << *i << " ";
	}
}

/*
int main() {
	vector<int> vec{ 1, 2, 3 };
	ostream_iterator<int>  ost(cout, " ");
	copy(vec.rbegin(), vec.rend(), ost);
}
*/