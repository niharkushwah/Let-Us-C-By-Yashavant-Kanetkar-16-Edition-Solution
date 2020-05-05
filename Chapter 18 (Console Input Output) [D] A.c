#include<stdio.h>

void xgets(char *str)
{
scanf("%[^\n]s", str);
}

void xputs(char *str)
{
printf("%s\n", str);
}
