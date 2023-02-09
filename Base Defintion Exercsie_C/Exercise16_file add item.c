#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<io.h>
#define LEN 100

int main()
{
	FILE *fptr;
	char fpath[LEN];
	int fno, fsize,price=0;
	char pid[5], pname[30], str_price[5];
	printf("請選擇項目-->1.開新檔 2.開舊檔:");
	if (getche() == '1')
	{
		printf("\n請輸入新檔案路徑:");
		gets(fpath);
		fptr = fopen(fpath, "w+");
	}
	else
	{ 
		printf("欲開啟的檔案路徑:");
		gets(fpath);
		fptr = fopen(fpath, "a+");
	}
		
	
	if (fptr == NULL)
	{
		printf("\n 開檔失敗,%s可能不存在\n", fpath);		
		exit(0);
	}
	fno = fileno(fptr); //取得檔案代碼
	fsize = filelength(fno); //取得檔案大小,以Byte為單位
	printf("\n %s 開檔完成,檔案大小 %d Bytes\n", fpath, fsize);
	while (1)
	{
		printf("請問是否繼續新增資料(Y/N):");
		if (toupper(getche()) == 'Y')
		{
			printf("\n請輸入要新增的資料\n");
			printf("編號:");
			gets(pid);
			printf("品名:");
			gets(pname);
			printf("單價:");
			gets(str_price);
			price = atoi(str_price);
			fprintf(fptr, "%s %s %d\n", pid, pname, price);// 將pid, pname, price寫入到fptr的檔案緩衝區
		}
		else
		{
			fclose(fptr);
			break;
		}
	}
	fptr = fopen(fpath, "r");
	fno = fileno(fptr); //取得檔案代碼
	fsize = filelength(fno); //取得檔案大小,以Byte為單位
	printf("\n資料更新完成");
	printf("\n %s 目前檔案大小%d Bytes\n", fpath, fsize);
	printf("%s 資料檔內容如下\n", fpath);

	while (fscanf(fptr, "%s %s %d", pid, pname, &price) != EOF)
	{
		printf("%5s %15s %5d\n", pid, pname, price);
	}
	fclose(fptr);
	printf("\n");
	system("PAUSE");
	return 0;
}

