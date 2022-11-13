#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vec1{ 0,1,2 }, vec2{ 0,1,2 };
	if (sizeof(vec1) == sizeof(vec2)) {
		for (int i = 0; i < vec1.size(); ++i)
			if (vec1[i] == vec2[i]) {
				++i;
			}
			else {
				cout << "两向量不相等！";
				break;
			}
		cout << "两向量相等！";
	}
	else
		cout << "两向量不相等！";
}