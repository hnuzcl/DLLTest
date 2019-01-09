// CreatDLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "CreatDLL.h"

int __stdcall test01(int a, int b, int c)
{
	return a + b + c;
}
int __stdcall test02(int a, int b)
{
	return a - b;
}

int __stdcall add(int a, int b)
{
	return a  + b;
}

