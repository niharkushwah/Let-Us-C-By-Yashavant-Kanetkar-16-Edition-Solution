#include<stdio.h>
int main ()
{
    int year,leap,z;
    /*leap=leap year  */
    printf("Enter The Year\n");
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("The Year Enter IS Leap Year\n%d",year);
    }
    else
    {
        printf("The Year Enter IS Not Leap Year\n%d",year);
    }
    return 0;
}
