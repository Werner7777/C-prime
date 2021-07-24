#include<iostream>

using namespace std;

class Tree {
public:
	Tree(int i, string j, int k) :age(i), name(j), height(k) { cout << 'k'; }
	Tree() :Tree(" ") { cout << 'k'; }
	Tree(string s) :Tree(0, s, 0) { cout << 'k'; }
	int age; string name; int height;
		
};

int main(){
	Tree woodland(" ");
}