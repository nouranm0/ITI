#include <iostream>
using namespace std;
class Shape {
protected:
    int dim1, dim2;
public:
    Shape()
    {

    }
    virtual float CalcArea() = 0;
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
    float CalcArea() {
        return 3.14 * dim1 * dim1;
    }
};
double TotalArea(Shape* sh[], int num_shape) {
    double sum = 0;
    for (size_t i = 0; i < num_shape; i++)
    {
        sum += sh[i]->CalcArea();
    }
    return sum;
}


int main()
{
    Shape* sh[3];
    sh[0] = new Rectangle(3, 4);
    sh[1] = new Square(3);
    sh[2] = new Circule(7);
    cout << "\nTOTAL AREA = " << TotalArea(sh, 3);
}