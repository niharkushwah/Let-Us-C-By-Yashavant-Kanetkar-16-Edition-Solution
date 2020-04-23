
#include<stdio.h>
int main()
{
    int year;
    printf("enter any Year\n");
    scanf("%d",&year);
    if(year%4==0)
    {
      printf("the year you insert is leap year%d\n",year);
    }
    else
    {
        printf("the year you insert is not leap year%d\n",year);
    }
    return 0;
}
