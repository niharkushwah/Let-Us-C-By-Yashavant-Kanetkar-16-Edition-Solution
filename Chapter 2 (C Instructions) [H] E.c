#include<stdio.h>
int main()
{
    float l1,l2,g1,g2,d;
    printf("Enter the latitude\n");
    scanf("%f%f",&l1,&l2);

    printf("Enter the longitude\n");
    scanf("%f%f",&g1,&g2);

    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g1-g2));
    printf("Distance in Nautical Miles is %f",d);
    return 0;
}
