#include <iostream>
using namespace std;
class point {
public:
	int x, y;
	point()
	{

	}
	point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

};
class Line {
	point p1;
	point p2;
public:
	Line(int x1, int y1, int x2, int y2)
	{
		p1.x = x1;
		p1.y = y1;
		p2.x = x2;
		p2.y = y2;
	}

	void draw() {
		cout << "im drawing a LINE\n";
	}
};

class Rectangle {
	point p1;
	point p2;
public:
	Rectangle(int x1, int y1, int x2, int y2)
		:p1(x1, y1), p2(x2, y2) {

	}
	void draw() {
		cout << "im drawing a RECTANGLE\n";
	}
};


class Circle {
	point p1;
	point p2;
public:
	Circle(int x1, int y1, int x2, int y2)
		:p1(x1, y1), p2(x2, y2) {

	}
	void draw() {
		cout << "im drawing a CIRCLE\n";
	}
};

class picture {
	Line* l;
	Circle* c;
	Rectangle* r;
	int numL;
	int numR;
	int numC;
public:
	picture(Line* l1, Circle* c1, Rectangle* r1,
		int numL, int numR, int numC) {
		l = l1;
		c = c1;
		r = r1;
		this->numL = numL;
		this->numC = numC;
		this->numR = numR;

	}

	void paint() {
		for (size_t i = 0; i < numL; i++)
		{
			l[i].draw();
		}

		for (size_t i = 0; i < numR; i++)
		{
			r[i].draw();
		}

		for (size_t i = 0; i < numC; i++)
		{
			c[i].draw();
		}
	}
};

int main()
{

}