#include <iostream>
#include<windows.h>
#include <conio.h>
using namespace std;
int comparison(int x,int y,int z) {
	if (x > y && x > z) {
		return x;
	}
	else if (y > x && y > z) {
		return y;
	}
	else {
		return z;
	}
}
struct Employee {
	int id;
	string name;
	int salary;
};
struct Deptarment {
	int id;
	string name;
	Employee emp[20];
};

void DisplayEmployee(Employee emp) {
	cout << "DISPLAY EMPLOYEE\n";
	cout << " Employee ID = " << emp.id;
	cout << " Employee Name = " << emp.name;
	cout << " Employee salary = " << emp.salary;
	cout << "\n----------------------\n";
};
Employee AddEmployee() {
	cout << "ADD EMPLOYEE\n";
	cout << "Enter Employee data\n";
	Employee emp;
	cout << "Employee ID = \n";
	cin >> emp.id;
	cout << "Employee Name = \n";
	cin >> emp.name;
	cout << "Employee salary = \n";
	cin >> emp.salary;
	cout << "\n----------------------\n";
	DisplayEmployee(emp);
	return emp;
};
Employee EditEmployee(int id) {
	cout << "Edit EMPLOYEE\n";
	cout << "Enter Employee data\n";
	Employee emp;
	emp.id = id;
	cout << "NEW Employee Name = \n";
	cin >> emp.name;
	cout << "NEW Employee salary = \n";
	cin >> emp.salary;
	cout << "\n----------------------\n";
	DisplayEmployee(emp);
	return emp;
}

COORD coord = { 0,0};      
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
struct timee {
	int second;
	int minute;
	int hour;
};
int main()
{
	//task1
	cout << "Enter 3 numbers as parameter, i will return the largest one\n";
	int x, y, z;
	cin >> x >> y >> z;
	cout << "the largest num = " << comparison(x,y,z);
	
	//task2
	cout << "\n----------------------\n";
	cout << "Enter Employee data\n";
	Employee emp;
	cout << "Employee ID = \n";
	cin >> emp.id;
	cout << "Employee Name = \n";
	cin >> emp.name;
	cout << "Employee salary = \n";
	cin >> emp.salary;
	cout << "Employee ID = "<<emp.id << " Employee NAME = " << emp.name<< " Employee Salary = " << emp.salary;
	
	//task3
	cout << "\n----------------------\n";
	Employee emp_array[2];
	for (int i = 0;i < 2;i++) {
		cout << "Enter Employee data of id = "<<i+1<<"\n";
		 emp_array[i].id = i+1;
		cout << "Employee Name = ";
		cin >> emp_array[i].name;
		cout << "\nEmployee salary = \n";
		cin >> emp_array[i].salary;
		cout << "\nEmployee ID = " << i+1 << " Employee NAME = " << emp_array[i].name << " Employee Salary = " << emp_array[i].salary;
		cout << "\n----------------------\n";
	}

	//task5
	cout << "----------------------\n";
	Employee emp_main = AddEmployee();

	
	//task6
	Employee emp_menu[20];
	Sleep(2000);
	system("cls");
	int select = 0;
	int key;
	int items = 5;
	int index = 0;
	do {
		for (int i = 0; i < items; i++) {
			gotoxy(0, i + 2);
			if (i == select)
				SetColor(10);
			else
				SetColor(7);

			if (i == 0)
				cout << (i == select ? " > " : "   ") << "Add";
			else if (i == 1)
				cout << (i == select ? " > " : "   ") << "Edit";
			else if (i == 2)
				cout << (i == select ? " > " : "   ") << "Display";
			else if (i == 3)
				cout << (i == select ? " > " : "   ") << "Delete";
			else if (i == 4)
				cout << (i == select ? " > " : "   ") << "Exit";
		}
		key = _getch();
		if (key == 0 || key == 224) {
			key = _getch();
			if (key == 72) {
				select--;
				if (select < 0)
					select = items - 1;
			}
			else if (key == 80) {
				select++;
				if (select >= items)
					select = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {

			if (select == 0) {//add
				system("cls");
				emp_menu[index] = AddEmployee();
				index++;
				cout << "saved";
				Sleep(3000);
				system("cls");
			}
			else if (select == 1) {//edit
				system("cls");
				cout << "Id of Employee to edit = ";
				int id;
				cin >> id;
				id--;
				emp_menu[id] = EditEmployee(id);
				cout << "Edited";
				Sleep(3000);
				system("cls");
			}
			if (select == 2) {//display
				system("cls");
				for (int i = 0;i < index;i++) {
					DisplayEmployee(emp_menu[i]);
				}
				Sleep(3000);
				system("cls");
			}
			if (select == 3) {//delete
				system("cls");
				cout << "Id of Employee to delete = ";
				int id;
				cin >> id;
				id--;
				emp_menu[id] = {0};
				cout << "deleted";
				Sleep(3000);
				system("cls");

			}
			if (select == 4) {//exit
				system("cls");
				cout << "Exiting program...";
				Sleep(1000);
				break;
			}
		}
	} while (true);
	


	//task5
	cout << "----------------------\n";
	cout << "enter time 1\n";
	timee t;
	cout << "seconds = ";
	cin >> t.second;
	cout << "\nminutes = ";
	cin >> t.minute;
	cout << "\nhours = ";
	cin >> t.hour;
	cout << "enter time 2\n";
	timee tt;
	cout << "seconds = ";
	cin >> tt.second;
	cout << "\nminutes = ";
	cin >> tt.minute;
	cout << "\nhours = ";
	cin >> tt.hour;
	cout << "difference = " << abs(t.hour - tt.hour) << ":" << abs(t.minute - tt.minute) << ":" << abs(t.second - tt.second);
}