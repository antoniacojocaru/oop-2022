#include "students.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
void Student::SetName(const char* name)
{
	strcpy_s(this->name, name);
}

char* Student::GetName()
{
	return this->name;
}

void Student::SetMathGrade(int grade)
{
	this->mathGrade = grade;
}

int Student::GetMathGrade()
{
	return this->mathGrade;
}

void Student::SetEnglishGrade(int grade)
{
	this->englishGrade = grade;
}

int Student::GetEnglishGrade()
{
	return this->englishGrade;
}

void Student::SetHistoryGrade(int grade)
{
	this->historyGrade = grade;
}

int Student::GetHistoryGrade()
{
	return this->historyGrade;
}

float Student::GetAverageGrade()
{
	return (this->englishGrade+this->historyGrade+this->mathGrade)/3.0;
}

