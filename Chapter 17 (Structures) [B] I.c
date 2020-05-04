#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<Windows.h>

#define GetSize (struct node*)malloc(sizeof(struct node))

void push(struct node**, int);
int pop(struct node**);

struct node
{
int data;
struct node* next;
};

int main()
{
char ans = 'y';
int num, exit = 1, action;
struct node *top = NULL;
printf("\nHello all, this program is of stacks using linked list, so");
printf("go ahead and make your linked list that will saved in stacks.\n\n");
while (ans == 'y')
{
	printf("\nEnter the data : ");
	scanf("%d", &num);
	push(&top, num);
	printf("\nWant to enter another number (y/n) : ");
	while (getchar() != '\n');
	scanf("%c", &ans);
}
system("cls");
while (exit != 0)
{

	printf("\n\n\nYou are in menu section\n\n");
	printf("\n0 : Exit\n1 : Push\n2 : Pop");
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
		scanf("%f", &num);
		push(&top, num);
		system("cls");
		break;
	case 2:
		system("cls");
		if (num == NULL)
		{
			printf("\nStack is empty");
			break;
		}
		num = pop(&top);
		printf("\n\n%d is popped.", num);
		break;
	default:
		printf("\nYou have entered a wrong option\,Try againA!!\n");
		exit = 1;
	}
}
_getch();
return 0;
}

/*Push means adding an element in the stack*/
void push(struct node **top, int num)
{
struct node *temp = NULL, *help = NULL;
help = GetSize;

if (help == NULL)
{
	printf("\nStack is full!!");
	return;
}

help->data = num;
help->next = *top;

/*Last added element is always the top element.*/
*top = help;
}

/*Pop means isolating the top element from the stacks.*/
int pop(struct node **top)
{
struct node *temp = GetSize;
int num;
if (*top == NULL)
	return NULL;
num = (*top)->data;
temp = *top;
*top = (*top)->next;
free(temp);
return num;
}
