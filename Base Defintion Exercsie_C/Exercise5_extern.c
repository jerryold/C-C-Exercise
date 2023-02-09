#include<stdlib.h>
#include<stdio.h>
#include "passwd.h"



int main()
{
	int chk;
	int keyin;
	while (1)
	{
		printf("請輸入密碼");
		scanf("%d", &keyin);
		chk = pw(keyin);
		if (chk == 1)
		{
			printf("密碼正確");
			printf("結束程式");
			break;
		}
		else
		{
			if (cnt > 0)
			{
				printf("密碼不正確!\n");
				printf("還可輸入%d次\n", cnt);
				continue;
			}
			else
			{
				printf("密碼不正確\n");
				printf("結束程式\n");
				break;
			}

		}


	}
	system("PAUSE");
	return 0;


}
