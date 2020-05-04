#include<stdio.h>
#include<conio.h>

int main()
{
int wind;
char cat;
printf("\nEnter the speed of the wind (in miles/hour) : ");
scanf("%d", &wind);
if (wind < 73)
	printf("\nCool down man, this isn't a hurricane");
else if (wind > 73 || wind < 96)
	cat = 'I';
else if (wind > 95 || wind < 111)
	cat = 'II';
else if (wind > 110 || wind < 131)
	cat = 'III';
else if (wind > 130 || wind < 156)
	cat = 'IV';
else
	cat = 'V';
printf("\nThe wind speed belongs to the Hurricane Category '%c'", cat);
_getch();
return 0;
}
