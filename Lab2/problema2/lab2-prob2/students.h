#pragma once
class Student
{
	char name[20];
	int mathGrade;
	int englishGrade;
	int historyGrade;
public:
	void SetName(const char* name);
	char* GetName();
	void SetMathGrade(int grade);
	int GetMathGrade();
	void SetEnglishGrade(int grade);
	int GetEnglishGrade();
	void SetHistoryGrade(int grade);
	int GetHistoryGrade();
	float GetAverageGrade();
	void DisplayStudentData();
};