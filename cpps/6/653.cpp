#define NDEBUG

#include<iostream>
#include<vector>
#include<cassert>


using namespace std;

void print(const vector<int> &v,decltype(v.begin()) iter){
    if (iter != v.end())
    {
        cout << *iter++ << " "; 
        cout << v.size() << " "; 
        return print(v,iter);
    }
    return;
}

int main()
{
    vector<int> v{0,1,2,3,4,5,6,7,8,9,10};
    assert(v.size() < 5);
    print(v,v.begin());
}
