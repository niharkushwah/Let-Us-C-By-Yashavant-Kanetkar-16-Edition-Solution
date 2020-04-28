     #include<stdio.h>
     int calc(int );
     int main()
     {
       int year,leap;
       printf("Enter year = ");
       scanf("%d",&year);
       leap=calc(year);
       if(leap==1)
       printf("%d is leap year",year);
       else
       printf("%d is not a leap year",year);
       return 0;
     }
     int calc(int year)
     {
       if(year%4==0 || year%100==0 || year%400==0)
       return 1;
       else
       return 0;
     }
