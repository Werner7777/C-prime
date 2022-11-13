#include<iostream>

using namespace std;

string::size_type find_char(const string s, char c, string::size_type &occurs) {
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i < s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}

int main() {
	string::size_type occ;
	char c = 'e';
	string::size_type ret = find_char("Werner", c, occ);
	cout << "第一次出现" << c << "的位置为："<<ret << endl
		<< c << "的总出现次数为："<< occ << "次" << endl;
}