#include<stdio.h>

#include<math.h>

void calc(int, int, int, int, int, int*, int*, float*);

int main()
{
int a, b, c, d, e, sm, av;
float sd;

printf("Enter five numbers : ");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

calc(a, b, c, d, e, &sm, &av, &sd);

printf("\nSum : %d\n\nAverage : %d\n\nStandard Deviation : %f\n", sm, av, sd);

getch();
return 0;
}
void calc(int a, int b, int c, int d, int e, int *sm, int *av, float *sd)
{
int i;
*sm = a + b + c + d + e;
*av = *sm / 5;
*sd = pow(a - *av, 2) + pow(b - *av, 2) + pow(c - *av, 2) + pow(d - *av, 2) + pow(e - *av, 2);
*sd = sqrt(*sd / 5);
}
