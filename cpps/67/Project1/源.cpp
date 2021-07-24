#include<iostream>
#include<vector>

using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return abs(a - b); }
int multi(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int Func(int a, int b);

int main() {
	vector<decltype(&Func)> vec;
	
	vec.push_back(add);
	vec.push_back(subtract);
	vec.push_back(multi);
	vec.push_back(divide);
	
	int a = 10, b = 1;

	for (auto& i : vec)
		cout << (*i)(a, b) << endl;
}