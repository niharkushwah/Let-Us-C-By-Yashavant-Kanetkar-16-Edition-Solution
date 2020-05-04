#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<Windows.h>

#define GetSize (struct node*)malloc(sizeof(struct node))

void insert(struct node**, int);
void del(struct node**, int);
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
struct node *start = NULL;
printf("\nHello all, this program is of linked list, so go ahead and make your limked list\n\n");
while (ans == 'y')
{
	printf("\nEnter the data : ");
	scanf("%d", &num);
	insert(&start, num);
	printf("\nWant to enter another number (y/n) : ");
	while (getchar() != '\n');
	scanf("%c", &ans);
}
system("cls");
while (exit != 0)
{
	display(start);
	printf("\n\n\nYou are in menu section\n\n");
	printf("\n0 : Exit\n1 : Insert\n2 : Delete\n3 : Display");
	printf("\n\n\nEnter your choice : ");
	scanf("%d", &action);
	switch (action)
	{
	case 0:
		printf("\nYou are exiting. . . .");
		_getch();
		return 0;
	case 1:
		system("cls");
		printf("\nEnter number : ");
		scanf("%d", &num);
		insert(&start, num);
		display(start);
		break;
	case 2:
		system("cls");
		printf("\nEnter number to delete : ");
		scanf("%d", &num);
		del(&start, num);
		display(start);
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

void insert(struct node **start, int num)
{
struct node *help = NULL, *curr = NULL, *pre = NULL;
help = GetSize;
help->data = num;/*This is our new node.*/
if (*start == NULL)/*Inserting the first element*/
{
	help->next = NULL;
	*start = help;
	return;
}

for (curr = *start; curr->data <= num; pre = curr, curr = curr->next)
	if (curr->next == NULL)
		break;

if (curr == *start && num < curr->data)
{
	help->next = *start;
	*start = help;
}
else if (curr->next == NULL && num > curr->data)
{
	curr->next = help;
	help->next = NULL;
}
else/*Insertion in between*/
{
	pre->next = help;
	help->next = curr;
}

}

void del(struct node **start, int num)
{
struct node *curr = *start, *pre = NULL;
while (curr->data != num)
{
	pre = curr;
	curr = curr->next;
	if (curr == NULL)
		break;
}
if (curr == *start)
	*start = curr->next;
else if (curr == NULL)
{
	printf("\nNumbe is not present in the list.");
	return;
}
else
	pre->next = curr->next;
free(curr);
}

void display(struct node *start)
{
struct node *i = NULL;
printf("\nYour list\n");
for (i = start; i != NULL; i = i->next)
	printf("%d\t", i->data);
}
