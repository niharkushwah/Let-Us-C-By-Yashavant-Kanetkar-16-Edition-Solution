#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<Windows.h>

#define GetSize (struct node*)malloc(sizeof(struct node))

void add(struct node**, struct node**, int);
int del(struct node**, struct node**);
void display(struct node*);

struct node
{
int data;
struct node* next;
};

int main()
{
	char ans = 'y';
int num, exit = 1, action;
struct node *start = NULL, *end = NULL;
printf("\nHello all, this program is of queue using linked list, ");
printf("so go ahead and make your linked list that wil saved in a queue.\n\n");
while (ans == 'y')
{
	printf("\nEnter the data : ");
	scanf("%d", &num);
	add(&start, &end, num);
	printf("\nWant to enter another number (y/n) : ");
	while (getchar() != '\n');
	scanf("%c", &ans);
}
display(start);
system("cls");
while (exit != 0)
{
	display(start);
	printf("\n\n\nYou are in menu section\n\n");
	printf("\n0 : Exit\n1 : Add\n2 : Remove\n3 : Display");
	printf("\n\n\nEnter your choice : "); +
		scanf("%d", &action);
	switch (action)
	{
	case 0:
		printf("\nYou are exiting. . . .");
		_getch();
		return 0;
	case 1:
		printf("\nEnter number : ");
		scanf("%d", &num);
		add(&start, &end, num);
		display(start);
		system("cls");
		break;
	case 2:
		system("cls");
		if (num == NULL)
		{
			printf("\nQueue is empty!!");
			break;
		}
		num = del(&start, &end);
		printf("\n%d has been extracted.\n\n", num);
		break;
	case 3:
		display(start);
		break;
	default:
		printf("\nYou have entered a wrong option\,Try againA!!\n");
		exit = 1;
	}
}
_getch();
return 0;
}

void add(struct node **start, struct node **end, int num)
{
struct node *help = NULL;
help = GetSize;
help->data = num;
help->next = NULL;
if (*start == NULL)
{
	*start = help;
	*end = help;
	return;
}
(*end)->next = help;
*end = help;
}

int del(struct node **start, struct node **end)
{
struct node *temp;
int num;
temp = GetSize;
if (*start == NULL)
	return NULL;
temp = *start;
num = temp->data;

*start = (*start)->next;

free(temp);
return num;
}

void display(struct node *start)
{
	struct node *a = start;
while (a != NULL)
{
	printf("%d\t", a->data);
	a = a->next;
}
}
