#include<stdio.h>
int main()
{
    int a,b,c,d,e,n,reverse;
    printf("Enter the five digit number\n");
    scanf("%d",&n);
    a=n/10000;
    b=(n/1000)%10;
    c=(n/100)%10;
    d=(n/10)%10;
    e=n%10;
    reverse=e*10000+d*1000+c*100+b*10+a;
    printf(" Reverse of the number is= %d",reverse);
    return 0 ;
}
