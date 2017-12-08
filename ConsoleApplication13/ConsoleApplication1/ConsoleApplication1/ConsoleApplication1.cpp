// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
void summ (int a, int b);
int main()
{
	int n, b;
	cin >> n >> b;
	summ(n, b);
	system("pause");
	
    return 0;
}

void summ(int a, int b)
{
	cout << a + b;
}
