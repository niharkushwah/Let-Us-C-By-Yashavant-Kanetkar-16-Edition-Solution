   #include<stdio.h>
      int main()
      {
        int i,j;
	int a[4][4],trans[4][4];
	for(i=0;i<4;i++)
	{
	 for(j=0;j<4;j++)
	 {
	   scanf("%d",&a[i][j]);
	   }
	 |
	 for(i=0;i<4;i++)
	 {
	    for(j=0;j<4;j++)
	    {
	     trans[i][j]=a[j][i];
	     }
	   }
	   for(i=0;i<4;i++)
	   {
	    for(j=0;j<4;j++)
	    {
	     printf("%d ",trans[i][j]);
	     }
	     printf("\n");
	    }
	    return 0;
	    }
