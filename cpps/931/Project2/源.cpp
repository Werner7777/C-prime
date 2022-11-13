#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

int main() {
	int s;
	list<int> lst{1, 2, 3, 4, 5, 6};
	deque<int> d1, d2;
	for(const auto &i: lst)
	{
		if (i % 2 == 0)
			d1.push_back(i);
		else
			d2.push_back(i);
	}

	for (const auto& i : d1)
		cout << i << ends;
	cout << endl;
	for (const auto& i : d2)
		cout << i << ends;

}