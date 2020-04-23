
#include <stdio.h>
#include <math.h>

int main()
{
    float cx, cy, radius, x, y, distance;

    printf("Enter the center point(cx, cy)\n");
    scanf("%f%f", &cx, &cy);

    printf("Enter radius of the circle\n");
    scanf("%f", &radius);

    printf("Enter the point(x, y) to check its position\n");
    scanf("%f%f", &x, &y);

    distance = sqrt( pow( (x - cx), 2 ) + pow( (y - cy), 2 ) );

    if(distance < radius)
    {
        printf("Point (%0.2f, %0.2f) is inside the Circle\n", x, y);
    }
    else if(distance > radius)
    {
        printf("Point (%0.2f, %0.2f) is outside the Circle\n", x, y);
    }
    else
    {
        printf("Point (%0.2f, %0.2f) is on the Circle\n", x, y);
    }

    return 0;
}
