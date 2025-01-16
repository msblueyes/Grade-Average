// Catherine Nicholson 

#include <iostream> 
#include <fstream>
using namespace std;

typedef int GradeType[100];	// declares a new data type:
// an integer array of 100 elements


float findAverage(const GradeType, int); // finds average of all grades 
int findHighest(const GradeType, int); // finds highest of all grades 
int findLowest(const GradeType, int); // finds lowest of all grades

int main()
{
	ifstream infile;
	infile.open("gradfile.txt");
	GradeType grades;	// the array holding the grades.
	int numberOfGrades;	// the number of grades read.
	int pos;	// index to the array.

	float avgOfGrades;	// contains the average of the grades.
	int highestGrade;	// contains the highest grade.
	int lowestGrade;	// contains the lowest grade.

	// Read in the values into the array 
	pos = 0;

	while (infile)
	{
		pos = pos++;
		infile >> grades[pos];
	}

	numberOfGrades = pos;

	// call to the function to find average 
	avgOfGrades = findAverage(grades, numberOfGrades);
	cout << endl << "The average of all the grades is " << avgOfGrades << endl;


	// Fill in the call to the function that calculates highest grade
	highestGrade = findHighest(grades, numberOfGrades);
	cout << endl << "The highest grade is " << highestGrade << endl;

	// Fill in the call to the function that calculates lowest grade
	lowestGrade = findLowest(grades, numberOfGrades);
	cout << "The lowest grade is " << lowestGrade << endl;

	return 0;
}
//********************************************************************************
//	findAverage
//
// task:	This function receives an array of integers and its size.
//	It finds and returns the average of the numbers in the array
// data in:	array of floating point numbers
// data returned: average of the numbers in the array
//
//******************************************************************************** 
float findAverage(const GradeType array, int size)
{

	float sum = 0;	// holds the sum of all the numbers 
	for (int pos = 0; pos < size; pos++)
		sum = sum + array[pos];

	return (sum / size);

}
//****************************************************************************
//	findHighest
//
// task:	This function receives an array of integers and its size.
//	It finds and returns the highest value of the numbers in the array
// data in:	array of floating point numbers
// data returned: highest value of the numbers in the array
//
//**************************************************************************** 
int	findHighest(const GradeType array, int size)
{
	int highest = array[0];

	for (int pos = 0; pos < size; pos++)
		if (array[pos] > highest)
			highest = array[pos];

	return highest;

}
//****************************************************************************
//	findLowest
//
// task:	This function receives an array of integers and its size.
//	It finds and returns the lowest value of the numbers in the array
// data in:	array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//**************************************************************************** 
int	findLowest(const GradeType array, int size)
{
	int lowest = array[0];

	for (int pos = 0; pos < size; pos++)
		if (array[pos] < lowest)
			lowest = array[pos];

	return lowest;

}

