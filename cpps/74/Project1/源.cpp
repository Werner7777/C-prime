#include<iostream>
#include<vector>

using namespace std;

class Screen {
public:
	typedef string::size_type pos;
	Screen& set(char c);
	Screen& set(pos, pos, char);
	Screen& display(ostream& os) { do_display(os); return *this; }
	const Screen& display(ostream& os) const { do_display(os); return *this; }
	pos size()const;

	Screen() = default;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd),
		contents(ht* wd, c) {}

	char get() const
	{
		return contents[cursor];
	}
	inline char get(pos ht, pos wd) const;
	Screen& move(pos r, pos c);
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	void do_display(ostream& os) const { os << contents; }
};

Screen::pos Screen::size()const { return height * width; }

inline Screen& Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = r + c;
	return *this;
}

char Screen::get(pos r, pos c) const {
	pos row = width * r;
	return contents[row + c];
}

inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::set(pos r, pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}

int main() {
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
}