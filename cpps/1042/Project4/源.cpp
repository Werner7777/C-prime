#include<iostream>
#include<fstream>

using namespace std;

void readAndWrite(const string& filenameIn, const string& filenameEven, const string& filenameOdd) {
	ifstream ifsIn(filenameIn);
	istream_iterator<int> ifsIn_iter(ifsIn), end_iter;
	ofstream ofsEven(filenameEven);
	ofstream ofsOdd(filenameOdd);
	ostream_iterator<int> ofsEven_iter(ofsEven, "\n");
	ostream_iterator<int> ofsOdd_iter(ofsOdd, " ");
	while (ifsIn_iter != end_iter)
	{
		if (*ifsIn_iter%2==0)
		{
			ofsEven_iter = *ifsIn_iter;
		}
		else
		{
			ofsOdd_iter = *ifsIn_iter;
		}
		++ifsIn_iter;
	}
}

int main() {
	readAndWrite("number.txt", "even.txt", "odd.txt");
}