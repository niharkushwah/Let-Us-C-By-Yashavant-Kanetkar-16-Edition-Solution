  #include<stdio.h>
  #include<conio.h>

int nonrec_calc(int);
  int rec_calc(int);

  int main()
{
int num, sum;

printf("Enter a five digit number : ");
scanf("%d", &num);

sum = nonrec_calc(num);
printf("\n\nSum of digits using non-recursive function : %d\n", sum);

sum = rec_calc(num);
printf("\n\nSum of digits using recursive function: %d\n", sum);

_getch();
return 0;

}

//Non recursive function
int nonrec_calc(int num)
{
int a, sum = 0, i;
for (i = 0; num; i++)
{
	a = num % 10;//obtaining the ladt digit
	sum = sum + a;//summing up the digits
	num = num / 10;//decreasing the number by one digit
}
return (sum);
}

  //Recursive function
int rec_calc(int num)
{
int sum = 0;
if (num == 0)
	return sum;
sum = num % 10 + rec_calc(num / 10);
return sum;
}
