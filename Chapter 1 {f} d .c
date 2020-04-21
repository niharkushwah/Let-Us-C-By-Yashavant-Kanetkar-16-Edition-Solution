#include <stdio.h>
int main()
{
    float temperature,centigrade;
    printf("Enter the temperature of city in Fahrenheit\n");
    scanf("%f",&temperature);
    centigrade=(temperature-32)*5/9;
    printf(" Temperature of city in centigrade %f \n",centigrade);
    return 0;

}

