#include<iostream>
#include<vector>
#include<string>

using namespace std;

class bornDate{
	string divi1{ "," };
	string divi2{ "/" };
	string divi3{ " " };
	vector<string> vec{ "January", "Fabruary", "March", "April", "May", "June"
	"July", "August", "September", "October", "November", "December" };
public:
	unsigned int year;
	unsigned int month;
	unsigned int day;
	bornDate(string data){
		int pos1;
		int pos2;
		// 格式XXX XX,XXXX
		if (data.find_last_of(divi1)
			!=string::npos)
		{
			for(int i = 0; i != vec.size(); ++i)
			{
				if (data.find(vec[i]) != string::npos)
				{
					month = i + 1;
				}
			}
			pos1 = data.find_last_of(divi3);
			pos2 = data.find(divi1);
			string s2(data, pos1 + 1, pos2 - 1);
			day = stoi(s2);
			string s3(data, pos2 + 1);
			year = stoi(s3);
		}
		// 格式XX XX XXXX
		else if (data.find_last_of(divi1)
			== string::npos && data.find_last_of(divi2)
			!= string::npos)
		{
			day = stoi(data);
			pos1 = data.find(divi2);
			string s2(data, ++pos1);
			month = stoi(s2);
			pos1 = data.find(divi2, pos1);
			string s3(data, ++pos1);
			year = stoi(s3);
		}
	}
};

int main() {
	string s("1/1/1900");
	bornDate Jerry(s);
	cout << Jerry.year << "年" << Jerry.month <<"月" << Jerry.day << ends;
}