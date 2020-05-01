#include<stdio.h>
int main()
{
      int a[25],*s,i,small;
      s=&a[0];
      printf("Enter 5-Elements :\n\n ");
      for(i=0;i<25;i++,s++)
            scanf("%d",s);
      s=&a[0];
      small=*s;
      for(i=0;i<25;i++,s++)
            if(*s<small)
                  small=*s;
      printf("\nSmallest Element : %d",small);
      return 0;
}
