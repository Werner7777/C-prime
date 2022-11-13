#include<iostream>

using namespace std;

int main() {
	int ival, jval;

	while (cin >> ival >> jval) {

		try
		{
			if (jval == 0)
				throw runtime_error("被除数不能为0");
			cout << ival / jval;
		}
		catch (runtime_error err)
		{
			cout << err.what()
				<< "\n是否重新输入, 请输入y或者n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
}
