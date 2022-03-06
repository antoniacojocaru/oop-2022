#include "students.h"
#include "functii.h"
#include <stdio.h>
int main()
{
	Student s1;
	Student s2;
	s1.SetName("Ana Maria");
	s1.SetEnglishGrade(6);
	s1.SetHistoryGrade(10);
	s1.SetMathGrade(7);
	s1.GetAverageGrade();
	s2.SetName("Sara Dana");
	s2.SetEnglishGrade(10);
	s2.SetHistoryGrade(10);
	s2.SetMathGrade(8);
	s2.GetAverageGrade();
	printf("media lui s1 vs s2 %d\n ", cmedie(&s1, &s2));
	printf("s1 vs s2 %d\n", cistorie(&s1, &s2));
	printf("s1 vs s2 dupa nume %d\n", cnume(&s2, &s1));
	printf("s1 vs s2 %d\n", cmate(&s2, &s1));
	return 0;
}