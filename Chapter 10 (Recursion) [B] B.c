   int func(int num);
    #include <stdio.h>
  int main()
{   int number;

printf("Enter number\n");
scanf("%d",&number);
func(number);
return 0;
  }
  int func(int num)
  {
int i;
for(i=2;i<=num;i++)
{
    if(num%i==0)
    {
        printf("%d\n",i);
        func(num/i);
        break;
    }
}
return 0;
}
