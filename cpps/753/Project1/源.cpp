#include<iostream>
#include<vector>

using namespace std;

class NoDefault {
public:
	int num;
	NoDefault(int i) :num(i) {}
};

class C
{
public:
	NoDefault NoD(int);
	C() { NoD(2); }
};
vector<C> vec[10];

int main(){
	int j = 2;
	NoDefault N = 2;
}