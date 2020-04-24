#include<stdio.h>
int main()
{
    int x,y,z,s;
    printf("Enter The Sides Of Triangle X,Y,Z\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z && x+z>y && z+y>x)
    {
        printf("The Triangle is valid");
    }
    else
    {
        printf("The Triangle is Invalid");
    }
}
