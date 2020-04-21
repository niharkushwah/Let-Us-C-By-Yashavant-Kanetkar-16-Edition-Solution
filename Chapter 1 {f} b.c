#include <stdio.h>
int main()
{
int dis,meters,feet,inches,centimeter;
/*dis=distance between tow cities*/
printf("Enter the distances between two cities in km\n");
scanf("%d",&dis);
meters=1000*dis;
inches=39370.0787*dis;
feet=3280.8399*dis;
centimeter=100000*dis;
printf("Distance in meters%d\n",meters);
printf("Distance in inches%d\n",inches);
printf("Distance in feet%d\n",feet);
printf("Distance in centimeter%d\n",centimeter);
return 0;
}
