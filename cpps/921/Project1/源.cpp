#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int finding(vector<int> vec, int i) {
	bool b = 0;
	vector<int>::iterator begin = vec.begin(),
	                      end = vec.end();

	while (begin != end) {
		if (*begin == i)
		{
			b = 1;
			cout << *begin << endl;
			return *begin;
		}
		else
			b = 0;
		++begin;
	}
	cerr << "Cann't find the number" << endl;
	return b;
}

int main() {
	int i = 5;
	vector<int> vec;
	finding(vec, i);
}