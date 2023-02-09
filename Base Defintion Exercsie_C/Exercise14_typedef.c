#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef char STRING[10];
typedef unsigned short UNSHORT;
typedef unsigned int UNINT;
typedef float REAL;

struct member_data {
	STRING name;
	UNSHORT age;
	UNINT income;
	REAL avg;

};

typedef struct member_data DATAS;
DATAS average(STRING tname, UNSHORT tage, UNINT tincome)
{
	DATAS ds;
	strcpy(ds.name, tname);
	ds.age = tage;
	ds.income =tincome;
	ds.avg = (REAL)tincome / 12;
	return ds;
}
int main()
{
	DATAS hr[3];
	hr[0] = average("Jerry", 25, 1000000);
	hr[1] = average("Alice", 35, 500000);
	hr[2] = average("Ken", 28, 400000);

	printf("人力資源部門薪資表\n");
	printf("姓名\t 年齡\t 年收入 \t平均月薪\n");
	printf("===================================\n");
	int i;
	for (i = 0; i <= 2; i++)
	{
		printf("%5s%5d%11d%11.2f\n", hr[i].name, hr[i].age, hr[i].income, hr[i].avg);
	}

	system("PAUSE");
	return 0;
}

