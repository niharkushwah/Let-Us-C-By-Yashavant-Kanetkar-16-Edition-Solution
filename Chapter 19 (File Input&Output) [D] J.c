#include<stdio.h>
#include<conio.h>
void main() {

struct name {
      int sn;
      char name[30];
      }s;
int i,num,flag=0;
long recsize;
char another,ch;
FILE *fp;
clrscr();

fp=fopen("NAMES.DAT","rb+");

if(fp==NULL) {

fp=fopen("NAMES.DAT","wb+");

if(fp==NULL)

printf("cannot open file! \n");
exit();
}

recsize=sizeof(s);

while(1) {

clrscr();
printf("\t\tStudent Names:\n");
printf("\t\t**************\n\n\n");
printf("\t1: Add names of students:\n\n");
printf("\t2: Search a student name:\n\n");
printf("\t3: List all student names:\n\n");
printf("\t4: List all names starting with 'S':\n\n");
printf("\t0: Exit\n\n");


gotoxy(2,24);
printf("Your choice: ");
fflush(stdin);

ch=getche();

switch(ch) {

case '1':

clrscr();

fseek(fp,0,SEEK_END);

another='y';

while(another=='y' || another=='Y') {

printf("\t\tAdd names of students:\n");
printf("\t\t**********************\n\n");
printf("Enter student number: ");
scanf("%d",&s.sn);
printf("\n\nEnter student name: ");
scanf("%s",s.name);


fwrite(&s,recsize,1,fp);

gotoxy(2,24);
printf("Enter another name(Y/N): ");
fflush(stdin);
another=getche();

clrscr();
}
break;

case '2':

clrscr();

printf("\t\tSearch a student name:\n");
printf("\t\t**********************\n\n");
printf("Enter student number: ");
scanf("%d",&num);

rewind(fp);

while(fread(&s,recsize,1,fp)==1) {

if(s.sn==num) {

printf("\n\nStudent Number: %5d\n\n",s.sn);
printf("Student name:   %s\n\n",s.name);

flag=1;
break;
}
 }

if(flag==0) {
printf("\n\n\nNo such name found!\n");
}
gotoxy(2,24);
printf("press any key to return...\n");
getch();

break;

case '3':

clrscr();

printf("\t\tList all student names\n");
printf("\t\t**********************\n\n\n");

rewind(fp);

while(fread(&s,recsize,1,fp)==1)  {
printf("\n%5d\t%-10s\n",s.sn,s.name);
flag=1;
}

if(flag==0) {
printf("\n\n\nNo name found!\n");
}

printf("\n\n\npress any key to return...\n");
getch();
break;

case '4':

clrscr();

printf("\t\tAll name starting with 'S':\n");
printf("\t\t***************************\n\n\n");

rewind(fp);
while(fread(&s,recsize,1,fp)==1) {

if(strncmp('s',s.name[0])==0) {     /* comparing only first character of \
           name if it is "s" */
printf("\n%5d\t%-10s\n",s.sn,s.name);
flag=1;
}
}

if(flag==0) {
printf("\n\n\nNo name starting with \'S\' found!\n");
}

printf("\n\n\npress any key to return...\n");
getch();
break;

case '0':

fclose(fp);
exit();

}
 }

 }
