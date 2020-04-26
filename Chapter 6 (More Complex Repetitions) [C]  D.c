/*
 * C Program to Find & Display Multiplication table
 */
#include <stdio.h>

int main()
{
    int number, i = 1;

    printf(" Enter the Number:");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n ", number);
    printf("--------------------------\n");
    while (i <= 10)
    {
        printf(" %d x %d = %d \n ", number, i, number * i);
        i++;
    }
    return 0;
}
