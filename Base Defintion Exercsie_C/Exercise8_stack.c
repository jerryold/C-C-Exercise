#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXSIZE 10
#define MSG "Press any key to continue"
void push(void);
void pop(void);
void printout(void);
int stack[MAXSIZE];
int i = 1, choose;
int* sptr, * full, * empty;

int main()
{
	sptr = stack;//把sptr指標指到stack[0]位址
	empty = stack;//把empty指標指到stack[0]位址
	full = stack + MAXSIZE - 1;//full指標指到stack[9]位址
	do {
		printf("\n ===Stack Operation ===");
		printf("\n  1.Push Operation");
		printf("\n  2.Pop Operation");
		printf("\n  3.Printout Operation");
		printf("\n  4.Quit Operation");
		printf("\n 請選擇[0-3]\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printout();
			break;
		case 0:
			exit(0);
		default:
			printf("\n\n==Error input (0-3)!!");
			break;


		}
		printf("\n\n %s\n", MSG);
	} while (1);
	system("PAUSE");
	return 0;

	

}
void push(void)
{
	sptr++; //sptr指標往前移
	if (sptr == full)
	{
		printf("\n\n...堆疊已滿!");
	}
	else
	{
		printf("\n\n請輸入第%d筆整數:", i++);
		scanf("%d", sptr);//將使用者輸入的資料放入sptr指向的位址
	}
}
void pop(void)
{
	if (sptr != empty)
	{
		printf("\n\n...Pop from stack:%3d", *sptr);
		sptr--;
		i--;
	}
	else
	{
		printf("\n\n....堆疊已經空了!\n\n");
		i = 1; //堆疊資料筆數重新計算
	}

}

void printout(void)
{
	int* lptr;
	lptr = sptr;
	printf("\n\n目前堆疊內資料");
	do
	{
		if (lptr != empty)
		{
			printf("%3d", *lptr);
			lptr--;
		}
		else
		{
			break;
		}

	} while (1);
	printf("\n                   Top<-- Stack  -->Bottom\n");
}