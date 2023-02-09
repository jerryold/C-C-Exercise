#include<stdio.h>
#include<stdlib.h>
#include "passwd.h"

int cnt = 3;
int password = 123456;
int pw(int a)
{
	if (a == password)
	{
		return 1;
	}
	else
	{
		cnt -=1;
		return 0;
	}
}