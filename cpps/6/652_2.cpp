#include<iostream>

using namespace std;

constexpr bool isShorter(const string& s1, const string& s2) {
	return s1.size() < s2.size();  //错误，返回值要求常量表达式，它必须在编译时确定值得大小
}

int main() {
	const string s1 = "WERN", s2 = "ER";
	cout << isShorter(s1, s2);
}