// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void summ(int a);

int main()
{ 
	int nambr = 10;
	summ(nambr);
	system("pause");
    return 0;
}

void summ(int a)
{
	int res = 0;
	for (int i = 1;  i<+ a; i++)
	{
		res = res + i;
	}
	cout << res;
}
