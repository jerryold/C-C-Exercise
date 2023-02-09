#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 10, k;
	int* ptr1;
	printf("Var-Name  Address  Content \n");
	printf("-------------------------------\n");
	printf("     i     %d     %d    \n", &i, i);
	printf("     k     %d     ?     \n", &k);
	ptr1 = &i;
	printf("  ptr1     %d     %d    \n", &ptr1, ptr1);
	k = *ptr1;
	printf("     k     %d     %d    \n", &k, k);
	system("pause");
	return 0;
}