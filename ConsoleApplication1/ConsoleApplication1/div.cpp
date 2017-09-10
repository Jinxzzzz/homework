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
	cout << "请输入结果:";
	cin >> d;
	if (c == d)
	{
		cout << "输入结果正确" << endl;
	}
	else
	{
		cout << "输入结果错误" << endl;
	}
}