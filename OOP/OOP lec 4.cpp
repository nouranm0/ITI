#include <iostream>
#include <String>
#include<windows.h>
#include <conio.h>
COORD coord = {0,0};                   // this is global variable
//center of axis is set to the top left cornor of the screen
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
using namespace std;
int main()
{
    string firstname, lastname;
    cout << "Enter ur first name\n";
    cin >> firstname;
    cout << "Enter ur last name\n";
    cin >> lastname;
    cout << "ur first name is " << firstname << " " << lastname << "\n";
    cout << "----------------\n";
    cout << "Enter sting to find the Frequency of Characters\n";
    string str;
    cin >> str;
   
    int arr[26] = {0};
    for (int i = 0;i < str.length();i++) {
        str[i] = tolower(str[i]);
        int index = (int)str[i] - 97;
        arr[index]+= 1;
    }
    cout << "the Frequency of Characters \n";
    for (int i = 0;i < 26;i++) {
        if (arr[i] > 0) {
            cout << (char)(i + 97) << " = " << arr[i] << endl;
        }
    }

    cout << "----------------\n";
    cout << "Enter char to display if it is Normal or Extended key\n";
    int ch = _getch();
   
        if (ch == 0 || ch == 224)
        {
            int ext = _getch();
            cout << "\nit is xtended Key" << endl;
        }
        else
        {
            cout << "\nit is Normal Key" << endl;
        }

    
    cout << "bouns----------------------\n";
    cout << "Enter string to cpy without Using strcpy \n";
    string strCpy;
    string strCpy1;
    cin >> strCpy;
    strCpy1 = strCpy;
    cout << "the new str = " << strCpy1 << endl;

    cout << "----------------\n";
    cout << "Enter string to find it's length\n";
    string strLength;
    cin >> strLength;
    int i = 0;
    while (strLength[i] != '\0') {
        i++;
    }
    cout << "length of str = " << i << endl;


    cout << "----------------\n";
    cout << "Enter string to remain alphabets only \n";
    string strAlp;
    cin >> strAlp;//nMour123a@n
    string strAlpOnly;
    int n = 0;
    cout << "the string with Alpabets only = ";
    for (int i = 0; i < strAlp.length(); i++)
    {
        if ((strAlp[i] >= 'a' && strAlp[i] <= 'z') ||
            (strAlp[i] >= 'A' && strAlp[i] <= 'Z')) {
            strAlpOnly += strAlp[i];
        }
    }
    cout <<strAlpOnly<< endl;
    cout << "----------------\n";

    Sleep(2000);
    system("cls");
        int select = 0;
        int key;
        int items = 3;
        do
        {
            gotoxy(0, 0);
            cout << "===== MAIN MENU =====";
            for (int i = 0; i < items; i++)
            {
                gotoxy(0,i+2);
                if (i == select)
                    SetColor(10);
                else
                    SetColor(7);
                if (i == 0)
                    cout << (i == select ? " > " : "   ") << "New";
                else if (i == 1)
                    cout << (i == select ? " > " : "   ") << "Edit";
                else if (i == 2)
                    cout << (i == select ? " > " : "   ") << "Delete";
            }
            key = _getch();
            if (key == 0 || key == 224)
            {
                key = _getch();
                if (key == 72)//up
                {
                    select--;
                    if (select < 0)
                        select = items - 1;
                }
                else if (key == 80)//down
                {
                    select++;
                    if (select >= items)
                        select = 0;
                }
            }
        } 
        while(true);
}