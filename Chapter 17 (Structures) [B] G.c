#include<stdio.h>
#include<conio.h>
struct dmy
{
int date;
int month;
int year;
};

int datcmp(struct dmy a, struct dmy b)
{
if (a.date == b.date && a.month == b.month && a.year == b.year)
	return 0;
else
	return 1;
}

int main()
{
struct dmy a, b;
int flag;
printf("\nEnter the first date (dd mm yyyy) : ");
scanf("%d%d%d", &a.date, &a.month, &a.year);
printf("\nEnter the second date (dd mm yyyy) : ");
scanf("%d%d%d", &b.date, &b.month, &b.year);
flag = datcmp(a, b);
if (flag)
	printf("\nThe dates are not same\n");
else
	printf("\nThe dates are same\n");
_getch();
return 0;
}
