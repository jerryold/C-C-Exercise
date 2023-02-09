#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<io.h>
#define LEN 100

int main()
{
	FILE *fptr;
	char fpath[LEN];
	int fno, fsize;
	char ch;
	printf("欲開啟的檔案路徑:");
	gets(fpath);
	fptr = fopen(fpath, "r");
	if (fptr == NULL)
	{
		printf("\n 開檔失敗,%s可能不存在\n", fpath);
		system("PAUSE");
		exit(0);
	}
	fno = fileno(fptr); //取得檔案代碼
	fsize = filelength(fno); //取得檔案大小,以Byte為單位
	printf("\n %s 開檔完成,檔案大小 %d Bytes\n", fpath, fsize);
	printf("%s 資料檔內容如下\n", fpath);
	while ((ch = fgetc(fptr)) != EOF)
	{
		printf("%c", ch);
	}
	fclose(fptr);
	printf("\n\n");
	system("PAUSE");
	return 0;
}

