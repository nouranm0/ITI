
#include <iostream>
using namespace std;
int main()
{
	//task1
   cout << "Enter 5 numbers to print\n";
   double arr[5];
   for (int i = 0;i < 5;i++) {
	   while (true) {
		   cin >> arr[i];
		   
		   if (cin.fail()) {
			   // 1. Clear the error flag so cin can read input again
			   cin.clear();
			   // 2. Discard the bad input still sitting in the stream buffer
			   cin.ignore(numeric_limits<streamsize>::max(), '\n');
			   cout << "Invalid input. Please enter a valid double: ";
		   }
		   else {
			   break;
		   }
	   }
   }
   cout << "the numbers you entered \n";
   for (int i = 0;i < 5;i++) {
	   cout << arr[i]<<"\n";
   }
   //task2
   cout << "---------------\n";
   cout << "the max num between 5 nums is = ";
   double maxnum = 0;
   for (int i = 0;i < 5;i++) {
	   if (maxnum < arr[i]) {
		   maxnum = arr[i];
	   }
   }
   cout << maxnum << "\n";
   //task3
   cout << "---------------\n";
   cout << "Enter 2 matrix of 2*2 to add them  \n";
   cout << "Enter matrix one  \n";
   double matrix1[2][2];
   double matrix2[2][2];
   
   for (int row = 0;row < 2;row++) {
	   for (int col = 0;col < 2;col++) {
		   while (true) {
			   cin >> matrix1[row][col];
			   if (cin.fail()) {
				   // 1. Clear the error flag so cin can read input again
				   cin.clear();
				   // 2. Discard the bad input still sitting in the stream buffer
				   cin.ignore(numeric_limits<streamsize>::max(), '\n');
				   cout << "Invalid input. Please enter a valid double: ";
			   }
			   else {
				   // Input was successfully read as a double
				   break;
			   }
		   }
	   }
   }
   cout << "NOW _ Enter matrix two  \n";
   for (int row = 0;row < 2;row++) {
	   for (int col = 0;col < 2;col++) {
		   while (true) {
			   cin >> matrix2[row][col];
			   if (cin.fail()) {
				   // 1. Clear the error flag so cin can read input again
				   cin.clear();
				   // 2. Discard the bad input still sitting in the stream buffer
				   cin.ignore(numeric_limits<streamsize>::max(), '\n');
				   cout << "Invalid input. Please enter a valid double: ";
			   }
			   else {
				   break;
			   }
		   }
	   }
   }
   cout << "the sum result of the 2 matrix \n";
   double res[2][2];
   for (int row = 0;row < 2;row++) {
	   for (int col = 0;col < 2;col++) {
		   res[row][col] = matrix1[row][col] + matrix2[row][col];
		   cout << res[row][col] << " ";
	   }
	   cout << "\n";
   }
   //task4
   cout << "---------------\n";
   cout << "Enter a 2D(2*2) matrix to display SUM & AVERAGE\n";
   double _2Darr[2][2];
   double sum = 0;
   for (int row = 0;row < 2;row++) {
	   for (int col = 0;col < 2;col++) {
		   while (true) {
			   cin >> _2Darr[row][col];
			   if (cin.fail()) {
				   // 1. Clear the error flag so cin can read input again
				   cin.clear();
				   // 2. Discard the bad input still sitting in the stream buffer
				   cin.ignore(numeric_limits<streamsize>::max(), '\n');
				   cout << "Invalid input. Please enter a valid double: ";
			   }
			   else {
				   break;
			   }
		   }
		   sum += _2Darr[row][col];
	   }
   }
   cout << "the SUM = " << sum << "\n";
   cout << "the AVG = " << (double)sum/4 << "\n";
   
   //DAY2 MAGIC BOX
   cout << "------------------------\n";
   cout << "MAGIC BOX\n";
   cout << "enter 3*3 matrix to check if it is magic box or no \n";
   int magic_box[3][3];
   for (int i = 0;i < 3;i++) {
	   for (int j = 0;j < 3;j++) {
		   cin >> magic_box[i][j];
	   }
   }
   int check = 15;
   int summ = 0;
   bool flag = true;
   for (int i = 0;i < 3;i++) {
	   for (int j = 0;j < 3;j++) {
		   summ += magic_box[i][j];
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
			   summ += magic_box[i][j];
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
