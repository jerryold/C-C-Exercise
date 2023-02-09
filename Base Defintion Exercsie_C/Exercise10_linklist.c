#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int main()
{
	struct node
	{
		char name[10];
		int age;
		struct node* next;
	};
	struct node* head, * ptr, * newptr;
	int i;
	/*產生node1*/
	newptr = (struct node*)malloc(sizeof(struct node));
	strcpy(newptr->name, "Jerry");
	newptr->age = 20;
	newptr->next = NULL;
	head = ptr = newptr;
	ptr = newptr;

	/*產生node2*/
	newptr = (struct node*)malloc(sizeof(struct node));
	strcpy(newptr->name, "Mateo");
	newptr->age = 30;
	newptr->next = NULL;

	ptr->next = newptr;
	ptr = newptr;


	/*產生node3*/
	newptr = (struct node*)malloc(sizeof(struct node));
	strcpy(newptr->name, "David");
	newptr->age = 35;
	newptr->next = NULL;

	ptr->next = newptr;
	//ptr = newptr;

	ptr = head;
	i = 1;
	while (ptr != NULL)
	{
		printf("\n node %d ==>姓名: %s", i++, ptr->name);
		printf("\t 年齡: %d", ptr->age);
		ptr = ptr->next;
	}
	printf("\n");
	system("PAUSE");
	return 0;


	
}
