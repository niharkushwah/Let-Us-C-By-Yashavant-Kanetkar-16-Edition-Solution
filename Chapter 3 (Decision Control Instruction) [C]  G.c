#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the angles of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("Triangles is valid");
    }
    else
    {
      printf("Triangle is invalid");
    }
    return 0;
}
