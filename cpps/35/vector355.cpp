#include<iostream>
#include<vector>
#include <iterator> //begin和end函数定义在iterator文件中
using namespace std;

int main() {
	int a[] = { 0, 1, 2 };
	vector<int> vec(begin(a), end(a));
	int b[3];
	for (int i = 0; i < vec.size(); i++) {
		b[i] = vec[i];
		cout << vec[i] << " " << b[i] << endl;
	}
}