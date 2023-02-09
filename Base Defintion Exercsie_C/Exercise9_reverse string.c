#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 80
#define MSG1 "請輸入英文字串:"
#define MSG2 "字串反轉顯示:"

char* reverse(char[]);


int main()
{
	char str1[BUFSIZE];
	char* ptr1;
	printf("\n%s", MSG1);
	gets(str1);

	ptr1 = reverse(str1);
	printf("\n % s", MSG2);
	puts(ptr1);
	printf("\n");
	system("PAUSE");
	return 0;

	
}
char *reverse(char str2[])
{
	char* ptr2, *newptr;
	int i, j;
	int strcount = strlen(str2);//取得字串長度
	newptr = (char*)malloc(sizeof(char) * strcount);
	ptr2 = str2;
	/*反轉字串並放入newptr的位址*/
	for (i = strcount - 1, j = 0; i >= 0; i--, j++)
	{
		*(newptr + j) = *(ptr2+i);

	}
	*(newptr + j) = '\0';
	return newptr;


}