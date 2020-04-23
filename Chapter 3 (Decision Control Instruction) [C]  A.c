#include<stdio.h>
int main()
{
    int cp,sp,profit,p,loss;
    /* cp=cost price , sp=selling price*/
    printf("Enter the cost price of Product\n");
    scanf("%d",&cp);
    printf("Enter the selling price of Product\n");
    scanf("%d",&sp);
    if (cp>sp)
    {
        p=cp-sp;
        printf("Loss%d",p);
    }
    else
    {
        p=sp-cp;
        printf("profit%d",p);
    }
    return 0;
}
