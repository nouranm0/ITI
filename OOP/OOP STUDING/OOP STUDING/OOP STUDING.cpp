#include <iostream>
using namespace std;
struct Employee {
	int id;
	string name;
};
void test(int* pointer){
	(*pointer)++;
	cout << "IM TEST" << *pointer << " - " << pointer << endl;
}

void test2(int** pointer) {
	(**pointer)++;
	cout << "IM TEST" << **pointer << " - " << pointer << endl;
}


void test3(int &ref) {
	ref++;
	cout << "IM TEST" << ref << " - "
		<< ref << endl;
}

void swap(int x,int y) {
	int temp = x;
	x = y;
	y = temp;
	cout << "IM swap" << x << " - " << y << endl;
}

int main()
{
	int arr1[3];// array has 3 intgers
	arr1[0] = 4;
	cout << arr1 << endl;
	//arr1[1] = new int[2];
	
	int* arr2[3];//array has 4 pointers of type int
	int x = 3;
	int* pointer = &x;
	arr2[0] = pointer;
	arr2[1] = new int[2];
	cout << *arr2[1] << endl;;

	int** arr3[3];//array of 3 pointer to pointer
	arr3[0] = &pointer;
	//arr3[1] = new int[2];
	arr3[1] = &arr2[0];
	cout << **arr3 << endl;
	//***************************************************
	//***************************************************
	int size = 0;
	int* arr4 = new int[size]; //array has 3 int dynamically
	arr4 = arr1;
	arr4[0] = 2;
	//arr4[1] = &x;
	
	
	int** arr5 = new int*[3];
	//arr5[0] = 2;
	arr5[0] = pointer;
	arr5[0] = &x;
	arr5[0] = new int[3];


	int i = 3, j = 5;
	swap(i,j);
	cout << "IM MAIN" << i<< " - " << j << endl;

	int y = 77;
	int *ptr = &y;
	test(ptr);
	cout << "IM MAIN" << *ptr << " - " << pointer << endl;

	test2(&ptr);
	cout << "IM MAIN" << *ptr << " - " << pointer << endl;

	//ايه الفرق ؟؟
	int* p = ptr;
	int** pr = &ptr;
	cout << arr1;
}