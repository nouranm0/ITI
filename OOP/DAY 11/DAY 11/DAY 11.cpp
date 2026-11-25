#include <iostream>
using namespace std;
class Shape {
protected:
    int dim1, dim2;
public:
    float CalcArea() {
    }
};

class Rectangle :public Shape {
public:
    Rectangle()
    {
        dim1 = 0;
        dim2 = 0;

    }
    Rectangle(int x, int y)
    {
        dim1 = x;
        dim2 = y;
    }
    float CalcArea() {
        return dim1 * dim2;
    }
};

class Square :public Shape {
public:
    Square()
    {
        dim1 = 0;
        dim2 = 0;
    }
    Square(int x)
    {
        dim1 = x;
        dim2 = x;
    }
    float CalcArea() {
        return dim1 * dim2;
    }
};

class Circule :public Shape {
public:
    Circule()
    {
        dim1 = 0;
        dim2 = 0;
    }
    Circule(int x)
    {
        dim1 = x;
        dim2 = 0;
    }
    double CalcArea() {
        return 3.14 * dim1 * dim1;
    }
};
double TotalArea(Rectangle* r, Square* s, Circule* c,
    int numR, int numS, int numC) {
    double sum = 0;
    for (size_t i = 0; i < numR; i++)
    {
        sum += r[i].CalcArea();
    }
    for (size_t i = 0; i < numS; i++)
    {
        sum += s[i].CalcArea();
    }
    for (size_t i = 0; i < numC; i++)
    {
        sum += c[i].CalcArea();
    }
    return sum;
}


int main()
{
    Rectangle r[2];
    r[0] = Rectangle(3, 4);
    r[1] = Rectangle(7, 8);
    cout << "r1 = " << r[0].CalcArea() << endl;
    cout << "r2 = " << r[1].CalcArea() << endl;
    ////////////////////////////////////////

    Square s[2];
    s[0] = Square(3);
    s[1] = Square(7);
    cout << "s1 = " << s[0].CalcArea() << endl;
    cout << "s2 = " << s[1].CalcArea() << endl;
    ////////////////////////////////////////

    Circule c[2];
    c[0] = Circule(3);
    c[1] = Circule(7);
    cout << "c1 = " << c[0].CalcArea() << endl;
    cout << "c2 = " << c[1].CalcArea() << endl;
    ////////////////////////////////////////

    cout << "\nTOTAL AREA = " << TotalArea(r, s, c, 2, 2, 2);


}