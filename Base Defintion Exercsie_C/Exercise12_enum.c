#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

enum month
{
	January=1,February,March,April,May,June,July,August,September,October,November,December
};

int main()
{
	int year = 0, month = 0, day = 0;
	printf("請輸入今天的日期(格式yy/mm/dd):");
	scanf("%d/%d/%d", &year, &month, &day);
	printf("\n\n 今天是%d年 %d月 %d日!\n\n", year, month, day);
	switch (month) {
		case March:
		case April:
		case May:
			printf(" %2d月是春光明媚的季節!", month);
			break;
		case June:
		case July:
		case August:
			printf(" %2d月天氣炎熱", month);
			break;
		case September:
		case October:
		case November:
			printf(" %2d月旅遊好季節", month);
			break;
		case December:
		case January:
			
		case February:
			printf(" %2d月天氣寒冷", month);
			break;


	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

