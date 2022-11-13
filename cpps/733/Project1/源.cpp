#include<iostream>

using namespace std;

class X {
	class Y ;
	Y *y;
};

class Y {
	X x;
};