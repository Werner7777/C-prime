#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i + 1);
        cout << v[i];
    }
    cout << endl;
}