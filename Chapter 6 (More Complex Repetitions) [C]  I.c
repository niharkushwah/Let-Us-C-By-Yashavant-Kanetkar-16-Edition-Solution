/* Population of a town today is 100000. The population has increased steadily at the rate of 10 % per year for last 10 years. C Program to determine the population at the end of each year in the last decade */
#include<stdio.h>
int main()
{
	double pot = 100000;
	int i=1;
	for (i = 1; i <= 10; i++)
	{
		pot += (pot / 100) * 10;
		printf("Year %d : %2.lf\n", i, pot);
	}
	return 0;
}
