#include<iostream>
#include<string>
#include <vector>
#include <fstream>

using namespace std;

void ReadFileToVector(const string& fileName, vector<string>& vec)
{
    ifstream in(fileName);
    if (in) {
        string buf;
        while (in >> buf) vec.push_back(buf);
    }
    else {
        cout << fileName << " error." << endl;
    }
}

int main(const string& FileName)
{
    vector<string> vec;
    ReadFileToVector(FileName, vec);
    for (const auto& str : vec) cout << str << endl;
}