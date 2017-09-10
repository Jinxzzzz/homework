#include<iostream>
#include<stdlib.h>
#include <time.h>
#include "add.h"
#include "sub.h"
#include"mul.h"
#include"div.h"
using namespace std;
int MainDisplayMeau()
{
	
	cout << "欢迎来到王者荣耀" << endl;
	cout << "*****1:进入加法训练*****" << endl;
	cout << "*****2:进入减法训练*****" << endl;
	cout << "*****3:进入乘法训练*****" << endl;
	cout << "*****4:进入除法训练*****" << endl;
	cout << "**   0:退出           **" << endl;
	cout << "*****输入数字进行对应的训练*****" << endl;
	int key;
	cin >> key;
	while ( key < 0 && key > 4 )
	{
		cout << "*****输入错误，请重新输入*****" << endl;
		cin >> key;
	}
	return key;
}
int main()
{
	int key;
	for (;;)
	{
		key = MainDisplayMeau();
		switch (key)
		{
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:
			div();
			break;
		case 0:
			cout << "谢谢使用,欢迎提出意见" << endl;
			exit(0);
		default:
			break;
		}
	}
}
