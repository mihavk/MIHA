// ConsoleApplication13.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;
void hello();
int main()

{
	int n;
	cin >> n;
	for ( int i = 0; i < n; i++)
	{
		hello();//Это место я изменил
	}
	
	system("pause");

    return 0;
}
void hello ()
{
	cout << "aimabear" << endl;

}
