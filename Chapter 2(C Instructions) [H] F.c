#include<stdio.h>
#include<math.h>

int main()
{
  float wcf,t,v;

  printf("Enter Value of Wind temperature :");
  scanf("%f",&t);

  printf("Enter Value of Wind Velocity :");
  scanf("%f",&v);

  wcf=35.74 + 0.6215*t + (0.4275*t-35.75)*pow(v,0.16);

  printf("The Value of wcf is :%f",wcf);
  return 0;
}
