#include<iostream>

using namespace std;

int main() {
	int ival, jval;

	while (cin >> ival >> jval) {

		try
		{
			if (jval == 0)
				throw runtime_error("����������Ϊ0");
			cout << ival / jval;
		}
		catch (runtime_error err)
		{
			cout << err.what()
				<< "\n�Ƿ���������, ������y����n" << endl;
			char c;
			if (!cin || c == 'n')
				break;
		}
	}
}
