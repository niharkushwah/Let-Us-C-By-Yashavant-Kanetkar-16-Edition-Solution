#include<stdio.h>
#include<conio.h>
#include<math.h>

int fact(int);
float sine(float value_at);
int main()
{
float x, sum;
printf("Enter the angle in radians : ");
scanf("%lf", &x);
sum = sine(x); //calling the sum of he series
printf("\n\nsin(%lf) = %lf", x, sum);
getch();
return 0;
}

float sine(float x)
{
int i, j, sign = 1;
float sum = 0;
for (i = 0, j = 1; i < 5; i++, j += 2, sign *= -1)
	sum = sum + /*pow(-1, i)*/sign*pow(x, j) / fact(j);
return sum;
}

int fact(int num)
{
int ans = 1;
while (num > 0)
{
	ans *= num;
	num--;
}
return ans;
}
