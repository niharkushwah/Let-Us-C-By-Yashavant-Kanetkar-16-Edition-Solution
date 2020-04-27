 #include<stdio.h>
  #include<conio.h>
  int main()
  {
int a,x,num,p,fact,prm;
for(a=2;a>1;a++)
{
    printf("\n\nEnter what your choice.\n");
    printf("\n\n1. Find factorial.");
    printf("\n\n2. Check Prime number.");
    printf("\n\n3. Check even and odd.\n\n4. Exit.\n");
    scanf("%d", &x);
    switch(x)
    {
    case(1):
        printf("Enter the number of what you want to find the factorial :");
        scanf("%d", &num);
        fact=num;
        for(p=1;p<num;p++)
            fact=fact*p;
        printf("%d is the factorial.", fact);
        break;

    case(2):
        printf("Enter the number which you want to check whether it is prime or not : ");
        scanf("%d", &num);
        for(;p<num;p++)
        {
            prm=num%p;
            if(prm==0)
            {
                printf("%d is not a prime number.", num);
                break;
            }
            if(p==num-1)
                printf("%d is a prime number.", num);
        }
        break;

    case(3):
        printf("Enter the number to check whether it is even or odd : ");
        scanf("%d", &num);
        if(num%2==0)
            printf("%d is an even number.", num);
        else
            printf("%d is odd odd number.", num);
        break;
	}

        if(x==4)
        {
            printf("\n\nOk Thank you for using this program.\n\n Bye.\n\n Exiting.");
            break;
        }
        if(x!=1 && x!=2 && x!=3 && x!=4)
            printf("You have entered the wrong choice. Try Again!!");
}
getch();
return 0;
}
