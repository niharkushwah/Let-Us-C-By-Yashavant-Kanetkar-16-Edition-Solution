#include<stdio.h>

int main()
{
    int hours, count = 1, ot = 0;

    while(count <= 10)
    {
        printf("\nEnter no of hours employee %d has worked\n", count);
        scanf("%d", &hours);

        if(hours > 40)
        {
            ot = ot + (hours - 40);

            printf("Employee %d has worked %d hours\n", count, hours);
            printf("Overtime pay is Rs %d\n", (hours-40)*12);
        }
        else
        {
            printf("no of hours worked is %d, which is less than 40 hours, so no over time pay for employee %d\n", hours, count);
        }
        count++;
    }

    printf("\nTotal Overtime pay is Rs %d\n", (ot*12));

    return 0;
}
