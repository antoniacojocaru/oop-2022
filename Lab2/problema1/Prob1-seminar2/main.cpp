#include "NumberList.h"
#include <stdlib.h>
#include "NumberList.cpp"
int main()
{
	NumberList n;
	n.Init();
	n.Add(3);
	n.Add(9);
	n.Add(2);
	n.Print();
	n.Sort();
	n.Print();
	n.Add(18);
	n.Add(4);
	n.Print();
	n.Sort();
	n.Print();
	system("pause");
	return 0;
}