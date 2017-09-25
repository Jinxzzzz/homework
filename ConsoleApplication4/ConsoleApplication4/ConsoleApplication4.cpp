// ConsoleApplication4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
using namespace std;
int main()
{
	char ch;
	int a = 0, b = 0, c = 0, d = 0, e;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z')
			a++;
		else if (ch >= '0'&&ch <= '9')
			b++;
		else if (ch == ' ')
			c++;
		else
			d++;
		e = a + b + c + d;
	}
	cout << "字符一共有\n" << e << endl;
	cout << "字母一共有\n" << a << endl;
	cout << "数字一共有\n" << b << endl;
	cout << "空格一共有\n" << c << endl;
	cout << "其他一共有\n" << d << endl;
	cin.get();
	return 0;
}

