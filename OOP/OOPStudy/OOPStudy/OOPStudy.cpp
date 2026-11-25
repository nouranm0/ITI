#include <iostream>
using namespace std;
struct employee {
	int id;
	string name;
	double salary;
};
class car {
	int model = 3;
public:
	car()
	{
	}
	car(float x, int y)
	{
		cout << "float";
	}
	car(int x,float y)
	{
		cout << "int";
	}
};
int main()
{
	car C(2,2);
	
	/*
	Asks the user for the number of employees.
	Dynamically allocates an array to store their salaries.
	Takes salaries from the user.
	Calculates and displays the total and average salary.
	Releases the allocated memory.
	*/
	int numOfEmployees;
	cout << "Enter number of employees: ";
	cin >> numOfEmployees;
	employee* arr = new employee[numOfEmployees];
	cout << "Enter employee Salary: " << endl;
	double sum = 0;
	for (size_t i = 0; i < numOfEmployees; i++)
	{
		cout << "Employee " << i + 1 << " = " << endl;
		cin >> arr[i].salary;
		sum += arr[i].salary;
	}
	cout << "sum of salaries = " << sum << endl;
	cout << "avg of salaries = " << sum / numOfEmployees << endl;
	//////////////////////////////////////////////////////////////////////////
	/*
	Q4. Array of Pointers to Employees
	Write a C++ program that:
- Creates an array of 3 pointers to Employee structures.
- Asks the user to enter the number of employees in each group.
- Dynamically allocates an array of employees for each pointer.
- Reads employee ID, name, and salary.
- Displays all employees in each group.
- Calculates the average salary of each group.
	*/
	
	/*
	employee* arrQ4[3];
	int sizes[3];
	for (size_t i = 0; i < 3; i++)
	{
		cout << "enter num of employees GROUP " << i + 1 << endl;
		cin >> sizes[i];
		arrQ4[i] = new employee[sizes[i]];
		cout << "---------- GROUP "<< i+1<<" -------- - " << endl;
		for (size_t j = 0; j < sizes[i]; j++)
		{
			cout << "enter id,name,salary of employee " << j + 1 << endl;
			cin >> arrQ4[i][j].id >> arrQ4[i][j].name >> arrQ4[i][j].salary;
		}
		
	}
	cout << "DISPLAY-----------------\n";
	for (size_t i = 0; i < 3; i++)
	{
		cout << "---------- GROUP " << i + 1 << " -------- - " << endl;
		for (size_t j = 0; j < sizes[i]; j++)
		{
			cout << "id,name,salary of employee " << j + 1 << " = ";
			cout << "ID = "<< arrQ4[i][j].id << "NAME = " << arrQ4[i][j].name
				<<"SALARY = " << arrQ4[i][j].salary;
		}
	}
	/*
	- Try to implement -- jagged array -- on Assinment N0.2, which means:
each student may have number of subjedts different t
han the other.
	
	*/
	
	/*
	2. C++ Program to calculate sum of student degrees,
		and average of each subject, asks the user for
		students and subject numbers. (Dynamic Allocation o
			f 2D Array - Pointer to Pointer)
	*/

	cout << "enter num of subjects \n";
	int subj_size;
	cin >> subj_size;
	int** arr11 = new int*[subj_size];
	for (size_t i = 0; i < subj_size; i++)
	{
		cout << "enter num of degree for subject " << i+1 << "\n";
		int degree_size;
		cin >> degree_size;
		arr11[i] = new int[degree_size];
		int sum = 0;
		for (size_t j = 0; j < degree_size; j++)
		{
			cout << "enter degree " << j + 1 << "\n";
			cin >> arr11[i][j];
			sum += arr11[i][j];
		}
		cout << "sum of degrees of subject " << sum << endl;
		cout << "avg of degrees of subject " << (double)sum/degree_size << endl;
	}
}

	/*
	int x;
    int arr[3];
	arr[0] = 1;
	/////////////////////////////////////
	int* arr1[3];
	arr1[0] = new int(1);
	////////////////////////////////////////
	int size ;
	cin >> size;
	int *arr2 = new int[size];
	cout << *arr2 << endl;
	cout << arr2[0];
	arr2[0] = 1;
	/////////////////////////////////////////

	int** arr3 = new int* [size];
	arr3[0] = new int[3];
	arr3[0][0] = 121;
	arr3[0] = &x;
	*/


