#include<stdio.h>


void calc(int, int, int, float*, float*);

int main()
  {
float av, pr;
int a, b, c;
printf("Enter the marks of the student in three subjects out of 100 :");
scanf("%d%d%d", &a, &b, &c);

calc(a, b, c, &av, &pr);

printf("\n\nAverage of the marks : %f\n\nPercentage of the student : %f", av, pr);
getch();
return 0;
}
void calc(int a, int b, int c, float *av, float *pr)
{
*av = (a + b + c) / 3;
*pr = *av / 3;
}
