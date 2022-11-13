#include<iostream>

using namespace std;
int main() {
	int ia[2][3] = { 0, 1, 2, 3, 4, 5 };
	for (int (&i)[3] : ia) {
		for (int& j : i) {
			cout << j << " ";
		}
	}
}

/*int main() {
	int ia[2][3] = { 0, 1, 2, 3, 4, 5 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << ia[i][j] << " ";
		}
	}
}*/

/*int main() {
	int ia[2][3] = { 0, 1, 2, 3, 4, 5 };
	for (int (*i)[3] = ia; i < ia + 2; ++i) {
		for (int* j = *i; j != *i + 3; ++j) {
			cout << *j << ' ';
		}
	}
}*/

