// Header File
// Brock Ferrari

#pragma once
#include <vector>

using namespace std;

class Student
{
public:
	Student(string n, string c);
	void setName(string n);
	void setCourse(string c);
	string getName();
	string getCourse();
	void AddGrade(int grade);
	void SortGrades();
	double CalcAverage();
	int lowestGrade();
	int highestGrade();
	int getNumGrades();
	void displayStudent();
private:
	string name;
	string course;
	vector<int> grades; // Declares vector with grades
};