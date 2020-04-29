#include<stdio.h>
#include<conio.h>
#include<math.h>

float dis(int, int, int, int);
float ar(int, int, int, int, int, int);
int main()
{
int x1, x2, x3, y1, y2, y3, x, y;
float A1, A2, A3, A;
printf("Enter the cordinates of first point of the trianlge : ");
scanf("%d%d", &x1, &y1);
printf("\n\nEnter the cordinates of second point of the trianlge : ");
scanf("%d%d", &x2, &y2);
printf("\n\nEnter the cordinates of third point of the trianlge : ");
scanf("%d%d", &x3, &y3);
printf("\n\nEnter the points to check it's position : ");
scanf("%d%d", &x, &y);
A1 = ar(x1, y1, x2, y2, x, y);
printf("A1 : %f\n", A1);
A2 = ar(x1, y1, x3, y3, x, y);
printf("A2 : %f\n", A2);
A3 = ar(x, y, x2, y2, x3, y3);
printf("A3 : %f\n", A3);
A = ar(x1, y1, x2, y2, x3, y3);
printf("A : %f\n", A);
if (!(A1 + A2 + A3>A || A1 + A2 + A3<A))
	printf("\n\nThe point (%d,%d) lies inside of triangle.", x, y);
else
	printf("\n\nThe point (%d,%d) lies outside of triangle.", x, y);
getch();
return 0;
}

float dis(int x1, int y1, int x2, int y2)
{
float distance;
distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
return (distance);
 }

float ar(int x1, int y1, int x2, int y2, int x3, int y3)
{
float a, b, c, area, S;
a = dis(x1, y1, x2, y2);
b = dis(x1, y1, x3, y3);
c = dis(x2, y2, x3, y3);
S = (a + b + c) / 2;
area = sqrt(S*(S - a)*(S - b)*(S - c));
return (area);
}
