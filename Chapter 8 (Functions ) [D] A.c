  #include<stdio.h>
    int fact(int );
    int main()
    {
     int num,fac;
     scanf("%d",&num);
     fac=fact(num);
     printf("%d",fac);
     return 0;
     }
     int fact(int n)
     {
       int i,factorial=1;
       for(i=1;i<=n;i++)
       {
         factorial*=i;
       }
       return factorial;
     }
