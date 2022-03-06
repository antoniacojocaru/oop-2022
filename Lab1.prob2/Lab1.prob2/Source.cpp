/*
//problema 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;
int parcurgere(char s[100])
{
	int n = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
		}
	}
	return n;
}
int main()
{
	char linie[100];
	int s = 0;
	FILE* fisier = fopen("ini.txt", "r");
	if (!fisier)
	{
		cout << "nu am putut deschide";
		return -1;

	}
	while (fgets(linie, 100, fisier) != NULL)
	{
		int nr = parcurgere(linie);
		s = s + nr;
	}
	printf ("% d", s);
	fclose(f);

	return 0;
}
*/
/*
//3.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char sir[256];
	int i = 0;
	char a[100][256];
	
	//cin.getl5ine(s, 256);
	scanf("%[^\n]",sir);
	
	char* p;
	p = strtok(sir, " ");
	while (p)
	{
		strcpy(a[i], p);
		i++;
		p = strtok(NULL, " ");
	}
	int n = i;
	for(int i=0;i<n;i++)
		for (int j = i + 1; j < n; j++)
		{
			if (strlen(a[i]) < strlen(a[j]))
			{
				char aux[256];
				strcpy (aux, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], aux);
			}
			else if (strlen(a[i]) == strlen(a[j]))
			{
				if (strcmp(a[i], a[j]) > 0)
				{
					char aux[256];
					strcpy(aux, a[i]);
					strcpy(a[i], a[j]);
					strcpy(a[j], aux);
				}
			}
		}
	for (i = 0; i < n; i++)
		cout << a[i] << endl;


	return 0;
}
*/
//4.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
bool isPrime(int n)
{
for (int tr = 2; tr < n/2; tr++)

		if ((n%tr) == 0)return false;

return true;
}

int main()
{
	int n;

	std::cout << "Enter a number:";

	std::cin >>n;

	if (isPrime(n))
std::cout << n << " is prime !";

	else
std::cout << n << " is NOT prime !";

	return 0;

}