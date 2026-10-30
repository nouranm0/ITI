#include <iostream>
using namespace std;
struct Employee {
	int id;
	string name;
};
int main()
{
	//task1
	Employee** arr = new Employee*[3];
	int size[3];
	for (int i = 0;i < 3; i++) {
		cout << "---------ARRAY " << i + 1 << " ---------\n";
		cout << "size of employees = ";
		cin >> size[i];
		arr[i] = new Employee[size[i]];
		for (int j = 0;j < size[i]; j++) {
			cout << "id of employee " << j + 1<< " = " ;
			cin >> arr[i][j].id;
			cout << "name of employee " << j + 1 << " = ";
			cin >> arr[i][j].name;
		}
	}

	for (int i = 0;i < 3; i++) {
		cout << "\n---------ARRAY " << i + 1 << " ---------\n";
		for (int j = 0;j < size[i];j++) {
			cout << "employee " << j + 1 << "\n";
			cout<< "id = "<<arr[i][j].id <<" ,name = "<< arr[i][j].name<<"\n";
		}
	}

	//task2
	///////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "-------------------------------------------------\n";
	int std_size,subj_size;
	cout << "num of students = ";
	cin >> std_size;
	int** student = new int*[std_size];
	cout << "num of subjects = ";
	cin >> subj_size;
	for (int i = 0;i < std_size;i++) {
		cout << "\n---------STUDENT " << i + 1 << " ---------\n";
		student[i] = new int[subj_size];
		for (int j = 0; j < subj_size; j++)
		{
			cout << "degree of Subject " << j + 1 << " = ";
			cin >> student[i][j];
		}
	}

	for (int i = 0;i < std_size;i++) {
		int sum = 0;
		for (int j = 0; j < subj_size; j++)
		{
			sum += student[i][j];
		}
		cout << "\nsum of student " << i + 1 << " =  "<<sum;
	}

	for (int i = 0;i < subj_size;i++) {
		double sum = 0;
		for (int j = 0; j < std_size; j++)
		{
			sum += student[j][i];
		}
		cout << "\nsum of subject " << i + 1 << " =  " << sum/std_size;
	}
	
	/////////////////////////////////////////////////////////////////////
	//bouns
	//task3

	cout << "-------------------------------------------------\n";
	int subj_size;
	int std_size[3];
	cout << "num of subjects = ";
	cin >> subj_size;
	int** student = new int* [subj_size];
	for (int i = 0;i < subj_size;i++) {
		cout << "\n---------SUBJECT " << i + 1 << " ---------\n";
		cout << "num of students = ";
		cin >> std_size[i];
		student[i] = new int[std_size[i]];
		for (int j = 0; j < std_size[i]; j++)
		{
			cout << "degree of student " << j + 1 << " = ";
			cin >> student[i][j];
		}
	}


	for (int i = 0;i < subj_size;i++) {
		double sum = 0;
		for (int j = 0; j < std_size[i]; j++)
		{
			sum += student[i][j];
		}
		cout << "\nsum of degrees of subject " << i + 1 << " =  " << sum;
		cout << "\navg of subject " << i + 1 << " =  " << sum / std_size[i];
	}
}