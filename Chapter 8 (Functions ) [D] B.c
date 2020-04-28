   #include<stdio.h>
   #include<math.h>
   int power(int,int);
   int main()
   {
     int a,b,ans;
     scanf("%d %d",&a,&b);
     ans=power(a,b);
     printf("%d",ans);
    return 0;
   }
   int power(int a,int b)
   {
     int d;
     d=pow(a,b);
     return d;
   }
