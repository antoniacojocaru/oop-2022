#include "Number.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
Number::Number(const char* value, int base)
{
	this->base = base;
	this->valeu = (char*)malloc(strlen(value) + 1);
	if (this->value != nullptr)
	{
		memset(this->value, 0, strlen(valeu) + 1);
		strcpy_s(this->value, strlen(value) + 1, value);

	}
	 
}
Number::~Number()
{
	free this->value;
	this->base = 0;
}
int Number::GetDigitsCount()
{
	return strlen(this->value);
}

int Number::GetBase()
{
	return this->base;
}

void Number::SwitchBase(int newBase)
{
	int n = 0, p = 1;
	
		for (int i=strlen(this->value)-1; i>=0;i--)
		{
			if (this->value[i] >= 'A' && this->value[i] < 'F')
			{
				n = n + (this->value[i] - '0' - 55) * p;
			}
			else n = n + (this->value[i] - '0') * p;
			p = p * this->base;
		}
		char* nr = new char[100];
		int i = 0;
		while (nr_nou >= 1)
		{
			if (nr_nou % newBase >= 10)
				nr[i] = (char)(nr_nou % newBase +'55');
			else
				nr[i] = nr_nou % newBase + '0';
			nr_nou /= newBase;
			i++;
		}
		nr[i] = '\0';
		_strrev(nr);
		this->value = (char*)realloc(value, strlen(nr) + 1);
		if (this->value != nullptr)
		{
			memset(this->value, 0, strlen(nr) + 1);
			memcpy(this->value, nr, strlen(nr) + 1);
		}
		this->base = newBase;


}
Number::Number(const Number& nr)
{

	this->base = nr.base;
	this->value = (char*)malloc(strlen(nr.value) + 1);
	if (this->value != nullptr)
	{
		memset(this->value, 0, strlen(nr.value) + 1);
		memcpy(this->value, nr.value, strlen(nr.value) + 1);
	}
}
void Number::Print()
{
	printf("The value is %s and is written in base %d\n", this->value, this->base);
}