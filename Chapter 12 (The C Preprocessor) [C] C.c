#include<math.h>
#define PI 3.14
#define S(a,b,c) ((a+b+c)/2.0)
#define TRI_AREA(a,b,c) (sqrt((S(a,b,c))*((S(a,b,c))-a)*((S(a,b,c))-b)*((S(a,b,c))-c)))
#define TRI_PERI(a,b,c) (a+b+c)
#define SQR_AREA(x) (x*x)
#define SQR_PERI(x) (2*(x+x))
#define CIR_AREA(r) (PI*r*r)
#define CIR_PERI(r) (2*PI*r)
Actual Program

#include<stdio.h>
#include<conio.h>
#include "areaperi.h"

int main()
{
int r, a, x, y, z;
double cir_ar, cir_peri, sqr_ar, sqr_peri, tri_ar, tri_peri;

printf("Enter the radius of the circle : ");
scanf("%d", &r);
printf("\nEnter the side of the square : ");
scanf("%d", &a);
printf("\nEnter the sides of the triangle : ");
scanf("%d%d%d", &x, &y, &z);

if (x + y>z && y + z>x && x + z>y)
{
	tri_ar = TRI_AREA(x, y, z);
	tri_peri = TRI_PERI(x, y, z);
	printf("\nTriangle");
	printf("\nArea : %lf\nPerimeter : %f\n", tri_ar, tri_peri);
}
else
	printf("\nThe triangle You entered is invalid.\n");

cir_ar = CIR_AREA(r);
cir_peri = CIR_PERI(r);
sqr_ar = SQR_AREA(a);
sqr_peri = SQR_PERI(a);
printf("\nCircle");
printf("\nArea : %f\nPerimeter : %f\n", cir_ar, cir_peri);
printf("\nSquare");
printf("\nArea : %f\nPerimeter : %f\n", sqr_ar, sqr_peri);
getch();
return 0;
}
