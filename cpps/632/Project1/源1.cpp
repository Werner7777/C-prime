#include<iostream>

using namespace std;

int *&get(int* array, int index) {
    int* ia = array;
    return ia;
}

int main() {
    int a[10];
    for (int i = 0; i != 10; ++i)
        get(a, i) = &i;  //对局部变量做引用会发生未知错误。
    return 0;
}