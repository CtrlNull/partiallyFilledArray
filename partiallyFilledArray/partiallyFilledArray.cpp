// This program reads data from a file into an array

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int array_Size = 100;			// Array size
	int numbers[array_Size];			// Array with 100 elements
	int count = 0;						// Loop counter variable
	ifstream inputFile;				// Input file stream object

	inputFile.open("numbers.txt");		// Open the file

	/*
		Read the numbers from the file into the array
		After this loop executes, the count variable will hold
		the number of values that were stored in the array.
	*/
	while (count < array_Size && inputFile >> numbers[count])
		count++;

	// CLose the file
	inputFile.close();
	
	// Display the numbers read
	cout << "The numbers are: ";
	for (int index = 0; index < count; index++)
		cout << numbers[index] << " ";
	cout << endl;
    return 0;
}

