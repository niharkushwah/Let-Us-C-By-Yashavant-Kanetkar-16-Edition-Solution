#include<stdio.h>
int main()
{
    int sal,da,he,gs ;
    /*sal=salary of ramesh, da=dearness allowance,he=house rent, gs=gross salary*/

    printf("Enter the salary of Ramesh\n");

    scanf("%d",&sal);
           da=(40*sal)/100;
          he=(20*sal)/100;
     gs=da+he+sal;
     printf("%d Gross salary of ramesh\n",gs);
     return 0 ;
}
