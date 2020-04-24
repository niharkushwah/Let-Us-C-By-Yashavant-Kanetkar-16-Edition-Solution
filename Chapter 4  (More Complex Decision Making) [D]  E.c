#include<stdio.h>
int main()
{
  float r, g, b, c, m, y, k, w = 0;

printf("\nEnter the color values of R, G and B : ");
scanf("%f %f %f", &r, &g, &b);

r /= 255;
g /= 255;
b /= 255;

if(w < r)
	w = r;

if(w < g)
	w = g;

if(w < b)
	w = b;


c = (w - r) / w;
m = (w - g) / w;
y = (w - b) / w;
k = 1 - w;

printf("\nC : %f\nM : %f\nY : %f\nK : %f", c,m,y,k);
return 0;
}
