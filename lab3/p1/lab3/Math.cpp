#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cstdarg>
int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return (x + y + z);
}

int Math::Add(double x,double y,double z)
{
	return int (x+ y + z);
}

int Math::Mul(int x,int y)
{
	return x * y;
}

int Math::Mul(int x,int y,int z)
{
	return x * y * z;
}

int Math::Mul(double x,double y)
{
	return int(x * y);
}

int Math::Mul(double x,double y,double z)
{
	return int(x * y * z);

}

int Math::Add(int count, ...)
{
	int sum = 0;
	va_list vl;
	va_start (vl, count);
	for (int i = 0; i < count; i++) {
		sum += va_arg(vl, int);
	}
	va_end(vl);
	return sum;
}
char* Math::Add(const char* s1, const char* s2)
{
	if (s1 == nullptr || s2 == nullptr) return nullptr;
	char* rezultat =(char*) malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(rezultat, s1);
	strcat(rezultat, s2);
	return rezultat;
}


int Math::Add(double x, double y)
{
return int(x + y);
}
