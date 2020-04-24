#include<stdio.h>

int main()
{
   int hdns,ts;
   float cc;


  printf("Hardness :");
  scanf("%d",&hdns);

  printf("\nCarbon Content :");
  scanf("%f",&cc);

  printf("\nTensile Strength :");
  scanf("%d",&ts);

  if ((hdns>50) && (cc<0.7) && (ts>5600))
    printf("Grade = 10");
  else if ((hdns>50) && (cc<0.7) && !(ts>5600))
    printf("Grade = 9");
  else if (!(hdns>50) && (cc<0.7) && (ts>5600))
    printf("Grade = 8");
  else if ((hdns>50) && !(cc<0.7) && (ts>5600))
    printf("Grade = 7");
  else if ((hdns>50) || (cc<0.7) || (ts>5600))
    printf("Grade = 6");
  else if (!(hdns>50) && !(cc<0.7) && !(ts>5600))
    printf("Grade = 5");
  return 0;
}
