#include <stdio.h>
#include <math.h>

int main()
{
    float degree, radian,ree;
    const float PI = 3.14159;

    printf("Enter angle in degree\n");
    scanf("%f",ree);

    radian = degree * (PI / 180.0);

    printf("Sin(%f) = %f\n", degree, sin(radian));
    printf("Cos(%f) = %f\n", degree, cos(radian));
    printf("Tan(%f) = %f\n", degree, tan(radian));
    printf("Cosec(%f) = %f\n", degree, 1/sin(radian));
    printf("Sec(%f) = %f\n", degree, 1/cos(radian));
    printf("Cot(%f) = %f\n", degree, 1/tan(radian));

    return 0;
}
