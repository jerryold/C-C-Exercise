#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main() 

{	
	//Exercise1:getch&put exercise
	/*
	char yn, username[10];
	int passwd;
	printf("請輸入username:");
	gets(username);
	printf("請輸入passwd:");
	scanf_s("%4d", &passwd);
	printf("1.使用者名稱:  %s\n", username);
	printf("2.密碼:   %d\n", passwd);
	printf("\n\n");
	printf("請問輸入是否正確(Y/N)");
	yn = toupper(getch());

	if (yn == 'Y')
	{
		puts("\n\n進入系統,請稍待\n");
	}
	else
	{
		puts("\n\n離開本系統!...\n");
	}
	system("PAUSE");
	return 0;
	*/

	//Exercise2-ASCII
	/*
	int i, j=0,k;
	printf("     ");
	for (k = 0; k <= 9; k++)
	{
		printf("%3d", k);
	}
	printf("\n");
	printf("-------------------------------");
	for (i = 0; i <= 127; i++)
	{
		if (i % 10 == 0)
		{
			printf("\n");
			printf("%2d| ", j);
			j++; //j用來控制行數
		}
		if (i <= 31)
		{
			printf("   "); //不可見字元
		}
		else
		{
			printf("  %c", (char)i);
		}

	}
	printf("\n");
	system("PAUSE");
	return 0;
	*/

	//Exercsie3-do while exercise
	/*
	int i;
	char ch,keyin;
	do
	{
		printf("\n要印出幾個*號(限輸入1~9)");
		keyin = getche();
		printf("\t");
		if (keyin <= '9' && keyin >= '1')
		{
			printf("\n輸出:");
			i = 1;
			do
			{
				printf("*");
				i++;
			} while (i <= (keyin - '0'));

		}
		else
		{
			printf("\n錯誤!,請輸入1~9數字.....");
		}
		printf("\n\n是否繼續列印(y/n)");
		ch = toupper(getche());
		printf("\n");

	} while(ch == 'Y');
	printf("\n");
	system("PAUSE");
	return 0;
	*/
	
	/*Exercise-array*/
	/*
	int a[5] = { 0 }; //宣告陣列元素初始皆為0
	int i = 0, min;
	printf("-----尋找最小值------\n");
	printf("-----請連續輸入五個數值---------\n");
	for (i = 0; i < 5; i++)
	{
		printf("請輸入%d個資料: ", i + 1);
		scanf("%d", &a[i]);
	}
	min = a[0];//先假設第一個值為最小
	for (i = 0; i < 5; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("最小值:%d\n\n", min);
	system("pause");
	return 0;
	*/

	/*Exercise-bubblesort*/
	
	int data[5];
	int n, i, j, t;
	int searchnum, num = -1, low = 0, high = 4, midNum = 0;//serachnum搜尋值
	printf("氣泡排序法(由小到大排序)\n");
	printf("...請連續輸入五個數值...\n\n");
	printf("排序前\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		data[i] = n;
		
	}
	//氣泡排序法
	for (i = 3; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			if(data[j]>data[j+1])
			{ 
				t = data[j];
				data[j] = data[j + 1];
				data[j + 1] = t;

			}
		}
	}
	printf("\n排序後:");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", data[i]);

	}
	
	

	/*Exercise-binary search(延續bubblesort)*/
	//二分搜尋法
	printf("請輸入要搜尋的數字\n");
	scanf("%d", &searchnum);
	
	do
	{
		midNum = (low + high) / 2;
		if (data[midNum] == searchnum)
		{
			num = midNum;
			break;
		}
		if (data[midNum] > searchnum)
		{
			high = midNum - 1;
		}
		else
		{
			low = midNum + 1;
		}


	} while (low <= high);
	if (num == -1)
	{
		printf("\n抱歉找不到%d這個數字...\n", searchnum);
	}
	else
	{
		printf("\nFind!位於排序後%d個數字...\n", (num + 1));
	}
	printf("\n\n");
	system("PAUSE");
	return 0;

	


}	