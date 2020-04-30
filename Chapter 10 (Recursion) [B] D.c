(1) Without Recursion

      void nonrec_bin(int);
      #include<stdio.h>
      int main()
      {
        int number;
        printf("Enter number\n");
        scanf("%d",&number);
        nonrec_bin(number);
        return 0;
        }
      void nonrec_bin(int num)
  {
int sum = 0;
for (; num; num /= 2)
{
	//Next digit will placed at first position.
	sum += num % 2;
	sum *= 10;
}
printf("%d", sum);
}
(2) With recursion

      #include<stdio.h>
  int bin(int);
  int main()
  {   int number;
printf("Enter number\n");
scanf("%d",&number);
bin(number);
return 0;
  }
  int bin(int number)
    {
if(number>1)
{
    bin(number/2);
}
printf("%d",number%2);

return 0;
}
