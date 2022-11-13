#include<iostream>

using namespace std;

int main() {
    constexpr int array_size = 10;
    int ia[array_size];
    for (int ix = 0; ix < array_size; ++ix) {
        ia[ix] = ix + 1;
        cout << ia[ix];
    }

}