#include <iostream>
using namespace std;
int main()
{
    //task 1
    cout << "Hello World!\n";

    //task 2
    cout << " -----------------" << endl;
    char a = 'a';
    cout <<"ASCII value of a = " << (int)a << endl;


    //task 3
    cout << " -----------------" << endl;
        int num1, num2;
        cout << "Enter num 1" << endl;
        cin >> num1;
        cout << "Enter num 2" << endl;
        cin >> num2;
        int sum = num1 + num2;
        cout << "sum = " << sum << endl;

        //task 4
        cout << " -----------------" << endl;
         sum = num1 + num2;
        cout <<"sum = " << sum << endl;
         sum = num1 * num2;
        cout << "mult = " << sum << endl;
         sum = num1 / num2;
        cout << "div = " << sum << endl;
         sum = num1 - num2;
        cout << "sub = " << sum << endl;
        

        //task 5
         cout << " -----------------" << endl;
         int num = 22;
         cout << "hexadecimal representation of a 22 = " << hex << num << '\n'; 


         //task 6
         cout << " -----------------" << endl;
         char ch = 'A';
         int ascii = int(ch);
         cout << "hexadecimal representation of A = "<< hex << ascii << endl;

        //task 7
        cout << " -----------------" << endl;
        cout <<"Quotient = " << num1 / num2 << endl;
        cout <<"Remainder = " << num1 % num2 << endl;

   }