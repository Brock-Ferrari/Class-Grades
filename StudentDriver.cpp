// Driver File
// Brock Ferrari

#include <iostream>
#include "Student.h"
#include <string>
#include <fstream>

using namespace std;

int main()
{
	Student Brock("Brock", "CSIS 112"); // Creates class instance and sets name and course

	int grades[9] = { 90, 85, 97, 91, 87, 86, 88, 82, 83 }; // Declares grades

	for (int i = 0; i < 9; ++i) // Adds grades to vector
		Brock.AddGrade(grades[i]);

	ifstream file;
	file.open("StudentInfo.txt");
	string name;
	file >> name;
	cout << name;

	Brock.SortGrades();
	Brock.displayStudent();

	cout << "\nThe maximum grade is: " << Brock.highestGrade() << endl;
	cout << "The minimum grade is: " << Brock.lowestGrade() << endl;
	cout << "The average grade is: " << Brock.CalcAverage() << endl << endl;
		
	system("pause");
	return 0;
}