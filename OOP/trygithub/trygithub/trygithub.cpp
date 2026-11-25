#include <iostream>
using namespace std;
void swap(int *x, int *y) {
	int *temp = x;
	x = y;
	y = temp;
	cout << *x << *y;
}
int main()
{
	int x = 3,y = 5;
	swap(&x, &y);
	//cout << x << y;
	string arr[10];
	arr[1] = "ffbfvdfddv";
}