#include <stdio.h>
int main()
{
    float length,breadth,radius,ar1,ar2;
    printf("Enter the length and breadth of rectangle\n");
    /* ar1=area of rectangle; ar2= area of circle*/
    scanf("%f%f",&length,&breadth);
    ar1=length*breadth;
    printf("Enter the radius of circle\n");
    scanf("%f",&radius);
    ar2=3.14*radius*radius;
    printf("Area of rectangle%f\n",ar1);
    printf("Area of circle%f\n",ar2);
    return 0;

}


