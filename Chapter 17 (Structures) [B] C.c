#include<stdio.h>
#include<conio.h>
#include<Windows.h>

void eng_info(char*, char*);

struct engine
{
char serial[4];
int yom;
char mat[50];
int quantity;
}
maruti[10] = { "AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};

int main()
{
char from[5], to[5];
printf("\nEnter the serial number, from where you want to start the list : ");
scanf("%s", from);
printf("\nEnter the serial at which you wan to end the list : ");
scanf("%s", to);
system("cls");
eng_info(from, to);
_getch();
return 0;
}

void eng_info(char *from, char *to)
{
	char first_letter;
int last_digit;
int i;
printf("\n\t\tEngines Information\n");
for (i = 0; maruti[i].serial[0] != *from; i++);
while (1)
{
	printf("\nSerial Number : %s", maruti[i].serial);
	printf("\nYear Of Manufacture : %d", maruti[i].yom);
	printf("\nMaterail Used : %s", maruti[i].mat);
	printf("\nQuantity : %d\n", maruti[i].quantity);
	if (i == 10)
		i = 0;
	i++;
	if (maruti[i].serial[0] == *to &&  maruti[i].serial[2] == *(to + 2))
	{
		printf("\nSerial Number : %s", maruti[i].serial);
		printf("\nYear Of Manufacture : %d", maruti[i].yom);
		printf("\nMaterail Used : %s", maruti[i].mat);
		printf("\nQuantity : %d\n", maruti[i].quantity);
		return;
	}
}
}
