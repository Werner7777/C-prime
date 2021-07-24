#include<fstream>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	fstream fst("book.txt");
	istream_iterator<string> fileIn_iter(fst), end_iter;
	vector<string> vec;
	while (fileIn_iter != end_iter)
	{
		vec.push_back(*fileIn_iter++);
	}
	ostream_iterator<string> ost(cout);
	copy(vec.begin(), vec.end(), ost);
}