  #include<stdio.h>
       int main()
          {
      int arr[5][5] = {
	1,2,3,4,5,
	6,7,8,9,10,
	11,12,13,14,15,
	16,17,18,19,20,
	21,22,23,24,25
     };
     int i,j,max;
     max=arr[0];
     for(i=0;i<5;i++)
     {
       for(j=0;j<5;j++)
       {
         if(a[i][j]>max)
	 max=a[i][j];
	 }
	}
	printf("Maximum Number is = %d",max);
	return 0;
      }
