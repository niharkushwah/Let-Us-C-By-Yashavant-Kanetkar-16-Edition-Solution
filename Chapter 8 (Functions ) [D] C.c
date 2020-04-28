    #include<stdio.h>
#include<conio.h>

void rom(int);
void print(int, char);

int main()
{
int yer;

printf("Enter the year : ");
scanf("%d", &yer);
printf("\nRoman equivalent of %d is : ", yer);
rom(yer);

getch();
return 0;
}

void rom(int yer)
{
int v, x, l, c, d, m;

m = yer / 1000;
print(m, 'm');
yer %= 1000;

d = yer / 500;
print(d, 'd');
yer %= 500;

c = yer / 100;
print(c, 'c');
yer %= 100;

l = yer / 50;
print(l, 'l');
yer %= 50;

x = yer / 10;
print(x, 'x');
yer %= 10;

v = yer / 5;
print(v, 'v');
yer %= 5;

print(yer, 'i');
}

void print(int a, char c)
{
int i;
for (i = 0; i < a; i++)
	printf("%c", c);
}
