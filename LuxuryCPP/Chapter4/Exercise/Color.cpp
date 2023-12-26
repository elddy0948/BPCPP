#include <iostream>

using namespace std;

class Color {
	int red, green, blue;

public:
	Color() : red(0), green(0), blue(0) {}
	Color(int r, int g, int b) : red(r), green(g), blue(b) {}

public:
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int ColorMain()
{
	Color screenColor(255, 0, 0);
	Color* p;
	p = &screenColor;	// (1)
	p->show();			// (2)

	Color colors[3];	// (3)
	p = colors;			// (4)

	// (5)
	p[0].setColor(255, 0, 0);
	p[1].setColor(0, 255, 0);
	p[2].setColor(0, 0, 255);

	// (6)
	for (int i = 0; i < 3; ++i)
	{
		p[i].show();
	}

	return 0;
}