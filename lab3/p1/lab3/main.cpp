#include "Math.h"
#include <stdlib.h>
#include <stdio.h>
int main()
{
	Math m;
	printf("%d\n", m.Add(4, 1));
	printf("%d\n", m.Add(1, 6, 10));
	printf("%d\n", m.Add(1.8, 7.4));
	printf("%d\n", m.Add(19.7, 1.4, 1.8));
	printf("%d\n", m.Mul(2, 2));
	printf("%d\n", m.Mul(2, 6, 1));
	printf("%d\n", m.Mul(2.1, 5.1));
	printf("%d\n", m.Mul(6.4, 5.1, 7.2));
	printf("%d\n", m.Add(7, 1, 2, 3, 4, 5, 6, 7));
	printf("%s\n", m.Add("123", "456"));
	system("pause");
	return 0;
}