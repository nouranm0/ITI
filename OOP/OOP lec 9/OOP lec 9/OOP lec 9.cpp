#include <iostream>
using namespace std;
class Fraction
{
private:
    int Num, Dem;

public:
    Fraction()
    {
        setNum(0);
        setDem(1);
    }
    Fraction(int num, int dem)
    {
        setDem(dem);
        setNum(num);
    }
    Fraction(int num)
    {
        setNum(num);
        setDem(1);

    }
    void setNum(int n) {
        Num = n;
    }
    int getNum() {
        return Num;
    }
    void setDem(int n) {
        Dem = n;
    }
    int getDem() {
        return Dem;
    }

    void Display() {
        cout << this->Num << "/ " << this->Dem << endl;
    }


    // f3 = f1 + f2;
    Fraction operator+ (Fraction f1) {
        Fraction fRETURN;
        fRETURN.Num = (f1.Num * this->Dem) + (this->Num * f1.Dem);
        fRETURN.Dem = f1.Dem * this->Dem;
        return fRETURN;
    }


    // f3 = f1 - f2;
    Fraction operator- (Fraction f1) {
        Fraction fRETURN;
        fRETURN.Num = (f1.Num * this->Dem) - (this->Num * f1.Dem);
        fRETURN.Dem = f1.Dem * this->Dem;
        return fRETURN;
    }

    // f3 = f1 * f2;
    Fraction operator* (Fraction f1) {
        Fraction fRETURN;
        fRETURN.Num = f1.Num * this->Num;
        fRETURN.Dem = f1.Dem * this->Dem;
        return fRETURN;
    }
    friend istream& operator>>(istream& input, Fraction& f) {
        cout << "\n--------------\nIM FRIEND cin func \nEnter Num, Dem\n";
        input >> f.Num >> f.Dem;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Fraction& f) {
        cout << "\n--------------\nIM FRIEND cout func\n ";
        output << f.Num << "/" << f.Dem;
        return output;
    }
};

int main()
{
    
    // DAY 9
    Fraction f1;
    f1.setNum(8);
    f1.setDem(3);
    Fraction f2;
    f2.setNum(1);
    f2.setDem(5);

    Fraction* test = new Fraction();
    cout << "test = ";
    test->Display();

    Fraction* f19 = new Fraction(8);
    cout << "f19 = ";
    f19->Display();
    f19->setDem(3);
    cout << "f19 = ";
    f19->Display();

    Fraction* f29 = new Fraction(1, 5);
    cout << "f29 = ";
    f29->Display();

    Fraction resultAddOperator;
    resultAddOperator = *f19 + *f29;
    cout << "Result Add = ";
    resultAddOperator.Display();
    resultAddOperator = f1 + f2;
    cout << "\nResult Add = ";
    resultAddOperator.Display();


    //-----------------------------------------------------------------
    Fraction resultSubOperator;
    resultSubOperator = f1 - f2;
    cout << "\nResult Sub = " << resultSubOperator.getNum() << "/" << resultSubOperator.getDem();


    //-----------------------------------------------------------------
    Fraction resultMultiOperator;
    resultMultiOperator = f1 * f2;
    cout << "\nResult Multi = " << resultMultiOperator.getNum() << "/" << resultMultiOperator.getDem();

    //*********************************
    Fraction f;
    cin >> f;
    cout << f << endl;
}