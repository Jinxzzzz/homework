#include<iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;
void div()
{
	int a, b, c, d;
	srand((int)time(NULL));
	a = rand();
	b = rand();
	c = a /b;
	cout << a << "/" << b << endl;
	cout << "��������:";
	cin >> d;
	if (c == d)
	{
		cout << "��������ȷ" << endl;
	}
	else
	{
		cout << "����������" << endl;
	}
}