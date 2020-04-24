#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Sides Of Triangle X,Y,Z\n");
    scanf("%d%d%d",&a,&b,&c);
    /* here a,b,c are the sides of triangle */
    if( a==b && b==c && c==a )
    {
        printf("Triangle is Equilateral ");
    }
    else if ( a==b || b==c || c==a )
    {
        printf("Triangle is Isosceles");
    }
    else
    {
        printf("Triangle is Scalene");
    }
    return 0;
}



