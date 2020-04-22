#include<stdio.h>
int main()
{
    int x,y,z,area;
    /*x,y,z are the sider of the triangle  */
    printf("Enter three sides of the triangle\n");
    scanf("%d%d%d",&x,&y,&z);
    area=(x+y+z)/2;
    printf("Area of triangle=%d",area);
    return 0 ;
}
