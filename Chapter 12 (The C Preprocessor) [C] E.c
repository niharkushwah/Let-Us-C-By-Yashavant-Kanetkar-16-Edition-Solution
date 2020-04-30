Header file code

    #define SI(a,b,c) ((a*b*c)/100.0)
    #define AMOUNT(si,p) (si+p)
Actual file code

#include<stdio.h>
#include<conio.h>
#include "interest.h"

int main()
{
float p, t, r, si, amnt;
printf("Enter the principal, time in year and rate of interest : ");
scanf("%f%f%f", &p, &t, &r);
si = SI(p, t, r);
amnt = AMOUNT(si, p);
printf("\nSimple Interest : %f\nAmount : %f", si, amnt);
_getch();
return 0;
}
