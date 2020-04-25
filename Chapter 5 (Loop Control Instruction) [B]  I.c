
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int small, big, range, num, limit;

    printf("Enter the limit\n");
    scanf("%d", &limit);

    printf("Enter %d numbers\n", limit);
    scanf("%d", &num);

    small = big = num;

    limit = limit - 1;

    while(limit)
    {
        scanf("%d", &num);

        if(num > big)
        {
            big = num;
        }

        if(num < small)
        {
            small = num;
        }

        limit--;
    }

    range = big - small;

    printf("Small Number = %d\nBig Number = %d\n", small, big);
    printf("Range is %d\n", abs(range));

    return 0;
}
