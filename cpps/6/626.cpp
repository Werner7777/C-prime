#include<initializer_list>
#include<iostream>

using namespace std;

int sum(initializer_list<int> in)
{
    int sum(0);
    for(const auto &i:in){
        sum+=i;
    }
    return sum;
}

int main()
{
    int i(0);
    i = sum({0,1,2,3,4,5});
    cout<< i << endl; 
}