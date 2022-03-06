#include "students.h"
#include <cstring>
#include "functii.h"
int cnume(Student* s1, Student* s2)
{
	char* name1= s1->GetName();
	char* name2= s2->GetName();
	int r = strcmp(name1,name2);
	if (r == 0)
		return 0;
	else if (r > 0)return 1;
	return -1;

}

int cmedie(Student* s1, Student* s2)
{
	float m1 = s1->GetAverageGrade();
	float m2 = s2->GetAverageGrade();
	if (m2 == m1)return 0;
	if (m1 > m2)return 1;
	return -1;

}

int cmate(Student* s1, Student* s2)
{
	int  m1 = s1->GetMathGrade();
	int  m2 = s2->GetMathGrade();
	if (m2 == m1)return 0;
	if (m1 > m2)return 1;
	return -1;

}

int cengleza(Student* s1, Student* s2)
{
	int m1 = s1->GetEnglishGrade();
	int  m2 = s2->GetEnglishGrade();
	if (m2 == m1)return 0;
	if (m1 > m2)return 1;
	return -1;

}

int cistorie(Student* s1, Student* s2)
{
	int  m1 = s1->GetHistoryGrade();
	int m2 = s2->GetHistoryGrade();
	if (m2 ==m1)return 0;
	if (m1 > m2)return 1;
	return -1;

}
