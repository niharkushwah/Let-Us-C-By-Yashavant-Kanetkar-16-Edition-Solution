
#include<stdio.h>
#include<conio.h>

int gcd(int, int);

int main()
{
int a, b, cd, max, min;
printf("Enter two numbers : ");
scanf("%d%d", &a, &b);
if (a>b)//for making a greater number
{
	max = a;
	min = b;
}
else
{
	max = b;
	min = a;
}
a = max;
b = min;
cd = gcd(a, b);//returning the greatest divisor
printf("\n\nGreatest common divisor of the givn numbers is %d", cd);
getch();
return 0;
}

int gcd(int a, int b)
{
static int x, temp;
if (b == 0)
	return (a);
x = a / b;
temp = a;
a = b;
b = temp - x*b;
gcd(a, b);
}
