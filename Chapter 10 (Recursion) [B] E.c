int sum(int);
 int main()
  {   int number,ans;
printf("Enter number\n");
scanf("%d",&number);
ans=sum(number);
printf("%d",ans);
return 0;
  }

int sum(int x)
 {
if (x == 0)
	return x;
x = x + sum(x - 1);
return x;
  }
