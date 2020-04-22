#include<stdio.h>
int main()
{
    int x,y;
    float a,b,r,w;
    printf("Enter the cartesian Co-ordinates X,Y\n");
    scanf("%d%d",&x,&y);
    r=sqrt(x*x+y*y);
    w=atan(y/x);
    printf("the polar co-ordinates are%d%f",&r,&w);
    return 0;
}
