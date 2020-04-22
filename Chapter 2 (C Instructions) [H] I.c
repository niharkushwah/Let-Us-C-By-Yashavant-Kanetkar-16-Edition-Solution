#include<stdio.h>
#include<math.h>

int main()
{
  int rs1,rs2,rs5,rs10,rs50,rs100,a;

  printf("Enter A Any Value:");
  scanf("%d",&a);

  rs100=a/100;
  rs50=(a%100)/50;
  rs10=((a%100)%50)/10;
  rs5=(((a%100)%50)%10)/5;
  rs2=((((a%100)%50)%10)%5)/2;
  rs1=(((((a%100)%50)%10)%5)%2)/1;

  printf("Following are The Lowest Number of Notes\n");
  printf("100 = %d\n",rs100);
  printf("50 = %d\n",rs50);
  printf("10 = %d\n",rs10);
  printf("5 = %d\n",rs5);
  printf("2 = %d\n",rs2);
  printf("1 = %d\n",rs1);
  return 0;
}
