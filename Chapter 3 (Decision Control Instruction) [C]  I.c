#include<stdio.h>
int main()

{
    int l,b,area,perimeter;
    /* l=lenght of rectangle b=breadth of a rectangle*/
    printf("Enter the length and breadth of a rectangle");
    scanf("%d%d",&l,&b);
    area=l*b;
    perimeter=(l+b)*2;
    if(area > perimeter)
    {
        printf("yes, area %d is greater than its perimeter %d\n",
               area, perimeter);
    }
    else
    {
        printf("Area %d is not greater than its perimeter %d\n",
               area, perimeter);
    }

    return 0;
}
