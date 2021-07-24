#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main() {
	vector<int> iv{1, 2, 3, 4, 5, 6};
	list<int> lst(iv.begin(), iv.end());
	int some_val = 3;
	list<int>::iterator iter = lst.begin();
	list<int>::iterator mid = iter + 2;
	while (iter != mid)
	{
		if (*iter == some_val)
			lst.insert(iter, 2 * some_val);
		++iter;
	}
	for(const auto &i: iv) 
	cout << i;
}