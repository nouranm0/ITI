#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
void swap(int *x,int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void imarray(int arr[],int size) {
	cout << "im with array Notation\n";
    for (int i = 0;i < size/2;i++) {
		arr[i] = arr[i] * 10;
    }
    cout << "im with point Notation\n";
    for (int i = size/2;i < size;i++) {
        arr[i] = *(arr+i) * 10;
    }
    for (int i = 0;i < size ;i++) {
        cout<< arr[i]<<"\n";
    }
}
struct point {
    int x;
    int y;
};
struct line {
    point p1;
    point p2;
};
void change_Position(line* L, int newX, int newY) {
    L->p2.x = newX;
    L->p2.y = newY;
    double length = sqrt(pow(L->p1.x - L->p2.x, 2) + pow(L->p1.y - L->p2.y, 2));
    cout << "length = " << length << endl;
}
int main()
{
    //task1
    int x, y;
    cout << "enter 2 int to swap them\n";
    cin >> x >> y;
    swap(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    
    //task2
    cout << "---------------------\n";
    cout << "enter 6 intgers\n";
    int arr[6];
    for (int i = 0;i < 6;i++) {
        cin >> arr[i];
    }
    imarray(arr, 6);
    //task3
    cout << "--------------------\n";
    point p1;
    point p2;
    p1.x = 0;
    p1.y = 0;
    p2.x = 0;
    p2.y = 4;
    line l;
    l.p1 = p1;
    l.p2 = p1;
    cout << "coordints p1(x,y) =(" << p1.x << "," << p1.y << ")\n";
    cout << "coordints p2(x,y) =(" << p2.x << "," << p2.y << ")\n";
    cout << "enter x ,y to change line \n";
    cin >> x >> y;
    change_Position(&l, x, y);
    
    //task4
    cout << "--------------------\n";
    cout << "enter num of lines\n";
    int num;
    cin >> num;
    line *arr1 = new line[num];
    int startx, starty;
    for (int i = 0;i < num;i++) {
        cout << "enter start x,y of line " << i+1 << "\n";
        cin >> startx >> starty;
        arr1[i].p1.x = startx;
        arr1[i].p1.y = starty;
        cout << "enter end x,y of line " << i+1 << "\n";
        cin >> startx >> starty;
        arr1[i].p2.x = startx;
        arr1[i].p2.y = starty;
        double length = sqrt(pow(arr1[i].p1.x - arr1[i].p2.x, 2) + pow(arr1[i].p1.y - arr1[i].p2.y, 2));
        cout << "length = " << length << endl;
    }
}