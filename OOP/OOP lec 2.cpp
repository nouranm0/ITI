#include <iostream>
#include <string>
using namespace std;
int main()
{
    //task1
    int num;
    cout << "Enter num!\n";
    cin >> num;
    if (num % 2 == 0) {
        cout << "num is even\n";
    }
    else {
        cout << "num is odd\n";
    }
    //task2
    cout << "---------------\n";
    int num1,num2, num3;
    cout << "enter 3 nums\n";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2) {
        if (num1 > num3)
            cout << "Bigest num is " << num1;
        else if (num2 > num3)
        {
            cout << "Bigest num is " << num2 << "\n";
        }else cout << "Bigest num is " << num3 << "\n";
    }
    else {
        if (num2 > num3)
            cout << "Bigest num is " << num2 << "\n";
        else 
        {
            cout << "Bigest num is " << num3 << "\n";
        }
        
    }
    //task3
    cout << "---------------\n";
    char degree;
    cout << "enter degree\n";
    cin >> degree;
    switch (degree) {
    case 'A':
        cout << "EXCELLENT\n";break;
    case 'B':
        cout << "VERY GOOD\n";break;
    case 'C':
        cout << "GOOD\n";break;
    case 'D':
        cout << "FAIR\n";break;
    case 'E':
        cout << "FAILED\n";break;
    }
    //task4
    cout << "---------------\n";
    int i = 1;
    int sum = 0;
    while (i != 100) {
        i++;
        sum += i;
    }
    
    cout << "---------------\n";
    cout << "Enter numbers to sum and i will told you when i reach 100\n";
    int num_sum;
    int sum2 = 0;
    while (sum2 < 100) {
        cin >> num_sum;
        sum2 += num_sum;
    }
    cout << "HI! i reached to 100 and the sum_result = " << sum2 << "\n";

    
    cout << "total of numbers " << sum << "\n";
    //task5
    cout << "---------------\n";
    cout << "**     MENU      **\n";
    cout << "1- Your profile\n";
    cout << "2- Home\n";
    cout << "3- Setting\n";
    cout << "4- Logout\n";
    //task6
    cout << "---------------\n";
    cout << "Multiplication Table of Num 3\n";
    for (int i = 1; i <= 12;i++) {
        cout << "3 * " << i << " = " << 3 * i << "\n";
    }
    //task7
    cout << "---------------\n";
    cout << "Enter anything to Check Whether a Character is an Alphabet or not\n";
    char anything;
    cin >> anything;
    int ASCII = (int)anything;
    if ((ASCII >= 65 && ASCII <= 90) || (ASCII >= 97 && ASCII <= 122)) {
        cout << "it is a char \n";
    }
    else {
        cout << "Not a char\n";
    }
    //task8
    cout << "---------------\n";
    cout << "write a sentence to calc num of alphabets and num of words\n";
    string sentence;
    std::getline(std::cin, sentence);
    getline(cin, sentence);
    int num_of_alphabets = 0;
    int num_of_words = 0;
    for (int i = 0;i < sentence.length();i++) {
        if ((sentence[i] >= 65 && sentence[i] <= 90) || (sentence[i] >= 97 && sentence[i] <= 122)) {
            num_of_alphabets++;
            if (sentence[i+1] == ' ') {
                num_of_words++;
            }
        }
    }
    cout << "num_of_alphabets = " << num_of_alphabets << "\n";
    cout << "num_of_words = " << num_of_words << "\n";
    //task9
    cout << "---------------\n";
    cout << "enter 3*3 matrix to check if it is magic box or no \n";
    int arr[3][3];
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cin >> arr[i][j];
        }
    }
    int check = 15;
    int summ = 0;
    bool flag = true;
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            summ+= arr[i][j];
        }
        if (summ == 15) {
            summ = 0;
        }
        else {
            flag = false;
            cout << "not a magic box\n";
            break;
        }
    }
    if (flag != false) {
        for (int j = 0;j < 3;j++) {
            for (int i = 0;i < 3;i++) {
                summ += arr[i][j];
            }
            if (summ == 15) {
                summ = 0;
            }
            else {
                flag = false;
                cout << "not a magic box\n";
                break;
            }
        }
    }
    if (flag == true)
    {
        cout << "it is a magic box!!\n";
    }



}
