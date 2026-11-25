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

    Fraction Add(Fraction f1) {
        int num = (f1.Num * this->Dem) + (this->Num * f1.Dem);
        int dem = f1.Dem * this->Dem;
        Fraction fRETURN;
        fRETURN.Num = num;
        fRETURN.Dem = dem;
        return fRETURN;
    }

    Fraction Subtract(Fraction f1) {
        int num = (f1.Num * this->Dem) - (this->Num * f1.Dem);
        int dem = f1.Dem * this->Dem;
        Fraction fRETURN;
        fRETURN.Num = num;
        fRETURN.Dem = dem;
        return fRETURN;
    }


};

int main()
{
    Fraction f1;
    f1.setNum(8);
    f1.setDem(3);
    Fraction f2;
    f2.setNum(1);
    f2.setDem(5);

    cout << "--------------f1------------ \n";
    f1.Display();
    cout << "--------------f2------------ \n";
    f2.Display();
    Fraction resultADD;
    resultADD = f1.Add(f2);
    cout << "--------------result ADD------------ \n";
    resultADD.Display();

    Fraction resultSUB;
    resultSUB = f2.Subtract(f1);
    cout << "--------------result SUB------------ \n";
    resultSUB.Display();

}