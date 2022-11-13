#include<iostream>
#include<vector>

using namespace std;


class Screen;


class Window_mgr {
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex);

private:
	vector<Screen> screens{ Screen(24, 80, ' ') };
};

class Screen {
public:
	friend void Window_mgr::clear(ScreenIndex);
	typedef string::size_type pos;
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
};

void Window_mgr::clear(ScreenIndex i)
{
	Screen& s = screens[i];
	s.contents = string(s.Screen::height * s.width, ' ');
}

int main() {
	string s(10, 'k');
	cout << s;
}