#include<stdio.h>
#include<conio.h>
int main()
{
char isbn[15];
int i, sum = 0;
printf("\nEnter 10 digit ISBN number : ");
gets_s(isbn);
for (i = 0; i <= 9; i++)
{
	isbn[i] -= 48;/*Converting characters into numerals*/
	sum = sum + ((i + 1)*isbn[i]);/*checking the condition of the ISBN validity*/
}
if (sum % 11)/*If not divisble by 11*/
	puts("\nISBN number is wrong.");
else
	puts("\nISBN number is valid.");
_getch();
return 0;
}
