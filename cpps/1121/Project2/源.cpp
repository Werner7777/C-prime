#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
	vector<string> vec;
	string word;
 	int a = 0;
	while (cin >> word)
	{
		if (vec.empty())
			vec.push_back(word);
		else
		{
			for (auto& w : vec)
				if (w == word)
					a = 1;
			if(a == 0)
				vec.push_back(word);
		}
	}
}