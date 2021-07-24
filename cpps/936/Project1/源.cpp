#include<iostream>
#include<list>

using namespace std;

int main() {
	list<int> lst{ 1, 2, 3, 4, 5, 6 };
	auto curr = lst.begin();
	while (curr != lst.end())
	{
		if (*curr % 2)
			curr = lst.erase(curr);
		else {
			curr = lst.insert(curr, *curr);
			++curr;
			++curr;
		}
	}
	for (auto& i : lst) {
		cout << i << " ";
	}
	cout << ends;
}