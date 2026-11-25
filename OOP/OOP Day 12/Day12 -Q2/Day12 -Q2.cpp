#include <iostream>
using namespace std;
class shape {

public:
	virtual void draw() = 0;
};
class point :public shape {
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
	void draw() {
		cout << "im drawing a POINT\n";
	}

};
class Line :public shape {
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

class Rectangle :public shape {
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


class Circle :public shape {
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
	shape* arr[4];
	int shape_id;

public:
	picture(shape* sh[], int sh_id) {
		shape_id = sh_id;
		for (int i = 0; i < shape_id; i++) {
			arr[i] = sh[i];
		}
	}

	void paint() {
		for (size_t i = 0; i < shape_id; i++)
		{
			arr[i]->draw();
		}
	}
};

int main()
{

}
