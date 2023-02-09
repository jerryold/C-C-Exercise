#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct grade
{
	char course[10];
	int score;

}peter = { "bcc",80}, tom = { "math",65 };

void swap(struct grade* x1, struct grade* x2);
int main()
{
	printf("Call by Address:\n\n");
	printf("===1.main主函式 呼叫前 初值設定\n");
	printf("Peter Couse:=%s\t Perter score=%d \n", peter.course, peter.score);
	printf("Tom Couse:=%s\t Tom score=%d \n", tom.course, tom.score);
	swap(&peter, &tom);
	printf("===4.main主函式 呼叫前 初值設定\n");
	printf("Peter Couse:=%s\t Perter score=%d \n", peter.course, peter.score);
	printf("Tom Couse:=%s\t Tom score=%d \n", tom.course, tom.score);
	printf("\n");
	system("PAUSE");
	return 0;

	
}
void swap(struct grade* x1, struct grade* x2)
{
	struct grade temp;
	printf("\n\n===2.進入swap()函式內交換前:\n");
	printf("Peter Couse:=%s\t Perter score=%d \n", x1->course, x1->score);
	printf("Tom Couse:=%s\t Tom score=%d \n", x2->course, x2->score);
	temp = *x1;
	*x1 = *x2;
	*x2 = temp;
	printf("\n\n===3.進入swap()函式內交換後:\n");
	printf("Peter Couse:=%s\t Perter score=%d \n", x1->course, x1->score);
	printf("Tom Couse:=%s\t Tom score=%d \n", x2->course, x2->score);

}
