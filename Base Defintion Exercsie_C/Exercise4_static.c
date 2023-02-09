#include<stdlib.h>
#include<stdio.h>
void fun1();
int times = 1;//全域變數
int main()
{
	for (times = 1; times <= 5; times++)
	{
		fun1();
	}


}
void fun1()
{
	int a_var = 10;//自動變數
	static int l_stat = 10; //局部靜態變數
	printf("\n 第%d次呼叫fun1() a_var=%d l_stat=%d", times, a_var++, l_stat++);
}