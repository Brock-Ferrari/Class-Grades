// Implementation File
// Brock Ferrari

#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include "Student.h"

using namespace std;

	Student::Student(string n, string c)
	{
		setName(n);
		setCourse(c);
	}
	void Student::setName(string n)
	{
		name = n;
	}
	void Student::setCourse(string c)
	{
		course = c;
	}
	string Student::getName()
	{
		return name;
	}
	string Student::getCourse()
	{
		return course;
	}
	void Student::AddGrade(int grade)
	{
		grades.push_back(grade);
	}
	void Student::SortGrades()
	{
		sort(grades.begin(), grades.end());
	}
	double Student::CalcAverage() // Calculates average of grades
	{
		double total = 0; 
		for (int i = 0; i < grades.size(); ++i)
		{
			total = total + grades[i];
		}
		return total / grades.size();
	}
	int Student::lowestGrade() // Sequentially determines lowest grade
	{
		int minGrade = grades[0];
		for (int i = 0; i < grades.size(); ++i)
		{
			if (grades[i] < minGrade)
				minGrade = grades[i];
		}
		return minGrade;
	}
	int Student::highestGrade() // Sequentially determines highest grade
	{
		int maxGrade = 0;
		for (int i = 0; i < grades.size(); ++i)
		{
			if (grades[i] > maxGrade)
				maxGrade = grades[i];
		}
		return maxGrade;
	}
	int Student::getNumGrades()
	{
		return grades.size();
	}
	void Student::displayStudent()
	{
		cout << "The student's name is: " << name << endl;
		cout << "The student's course is: " << course << endl;
		cout << "The student's grades are: " << endl;

		for (int i = 0; i < grades.size(); ++i)
		{
			cout << grades[i] << endl;
		}
	}
