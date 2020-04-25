#include<stdio.h>
 main()
{
int num,zero=0,negative=0,postive=0;
char choice;
clrscr();
do
{printf("enter a number=");
scanf("%d",&num);
if(num==0)
zero++;
if(num<0)
negative++;
if(num>0)
postive++;
printf("zero=%d\nnegative=%d\npostive=%d",zero,negative,postive);
printf("do you want to continue y/n=");
scanf("%c",&choice);
choice=getche();}
while(choice=='y');
getch();
}
