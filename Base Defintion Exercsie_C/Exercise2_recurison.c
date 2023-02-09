#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int comb(int, int);

int main() 

{	
	//Exercise-Recursion
	int numN, numM, ans;
	printf("請輸入要計算組合的兩個數\n");
	printf("請輸入第一個數 n:\n");
	scanf("%d", &numN);
	printf("請輸入第一個數 m:\n");
	scanf("%d", &numM);

	if (numN > numM)
	{
		ans = comb(numN, numM);
		printf("\n組合公式combo(%d,%d)=%d\n\n", numN, numM, ans);
	}
	else
	{
		printf("\n數值n必須大於m\n\n");
	
	}

	system("PAUSE");
	return 0;
	


}	
int comb(int n, int m)
{
	if(n==m ||m==0)
	{
		return 1;
	}
	else
	{
		return comb(n - 1, m) + comb(n - 1, m - 1);
	}
}