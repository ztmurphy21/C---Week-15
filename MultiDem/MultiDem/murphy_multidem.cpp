//Multi Dimensional Array Problem
//CPT-180
//Programmer: Zach Murphy on 5-3-2017

#include <iostream>
#include <conio.h>

using namespace std;

//variables declared globally for for loop usage
int sumcol1, sumcol2, sumcol3, sumcol4;
int main()
{
	//declarations for array
	const int ROWS = 3, COLS = 4;
	int employees[ROWS][COLS] = { { 1, 2, 3, 4 } ,
								{ 5, 6, 7, 8 } ,
								{ 9, 10, 11, 12 } };
	
	//intro to user
	cout << "\t Employee Table\n";
	cout << "Here is the contents of a table:\n";
	cout << "--------------------------------\n";

	//output table
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			cout << employees[row][col] << "\t";
		}
		cout << endl;
	}

	//give space between table output and sum output
	cout << "--------------------------------\n\n";
	
	//sum a columns	
	for (int rowOfArray = 0; rowOfArray < ROWS; rowOfArray++) {
		sumcol1 += employees[rowOfArray][0];
		sumcol2 += employees[rowOfArray][1];
		sumcol3 += employees[rowOfArray][2];
		sumcol4 += employees[rowOfArray][3];
	}

	//print out the sum of each column
	cout << "Here are the sums of each column:\n";
	cout << "--------------------------------\n";
	for (int x = 0; x < COLS; x++) {
		int sums[4] = { sumcol1, sumcol2, sumcol3, sumcol4 };
		cout << "Sum of column " << (x + 1) << " is " << sums[x] << "."<< endl;
		}
	cout << "--------------------------------\n";
		
	//allow the user to exit the program
	cout << "\n\nPress a key to exit...";
	_getch();
	return 0;
}




