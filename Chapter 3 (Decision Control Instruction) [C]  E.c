#include<stdio.h>
int main ()
{
    int num, n, r_num=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while(num!=0)
    {
        r_num = r_num * 10;

        r_num = num % 10 + r_num;

        num = num/10;
    }
    printf("Reversed Number of %d is %d\n",n, r_num);

    if (n==r_num)
        printf("Input Number %d & Reversed Number %d are equal", n, r_num);
    else
        printf("Input Number %d & Reversed Number %d are not equal", n, r_num);

   return 0;
}
