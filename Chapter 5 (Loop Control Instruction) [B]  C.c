#include <stdio.h>
#include <math.h>

int main()
{
    double num, root;

    /* Input a number from user */
    printf("Enter any number to find square root: ");
    scanf("%lf", &num);

    /* Calculate square root of num */
    root = sqrt(num);

    /* Print the resultant value */
    printf("Square root of %f = %f", num, root);

    return 0;
}
