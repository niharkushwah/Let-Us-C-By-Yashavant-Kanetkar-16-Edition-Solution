1. program to creat master file.


#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {

FILE *fp;
struct student {
  int rl;
  char name[50];
  }s;
char ch,another;
clrscr();

fp=fopen("MASTERFILE.DAT","rb+");

if(fp==NULL) {

fp=fopen("MASTERFILE.DAT","wb+");

if(fp==NULL)
puts("cannot open master file!");
exit();
}


while(1) {

clrscr();

gotoxy(30,2);
printf("Masterfile\n");
gotoxy(30,3);
printf("**********\n\n\n");
gotoxy(20,6);
printf("1: Enter student data: ");
gotoxy(20,8);
printf("2: Read student data: ");
gotoxy(20,10);
printf("0: Exit: ");

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

clrscr();

gotoxy(2,24);
printf("NOTE: assign roll numbers in ascending order");
gotoxy(20,5);
printf("Enter roll number: ");
scanf("%d",&s.rl);

gotoxy(20,7);
printf("Enter name: ");
fflush(stdin);
gets(s.name);

fwrite(&s,sizeof(s),1,fp);



gotoxy(20,10);
printf("Add more data(Y/N): ");
fflush(stdin);

another=getche();

}

break;

case '2':

clrscr();

gotoxy(30,2);
printf("Student data");
gotoxy(30,3);
printf("************\n\n");

rewind(fp);

while(fread(&s,sizeof(s),1,fp)==1) {

printf("\n%d\t%s\n",s.rl,s.name);

}

printf("\n\npress any key to return...");
getch();

break;

case '0':

fclose(fp);
exit();

}
}


}

2. program to creat transaction file and generate updated list


#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 100

void main() {

FILE *ft,*fu,*fm,*ftemp;

struct student {
  int rl;
  char name[50];
  }s,ss[N],temp;

struct transaction {
      char stats;
      int rl;
      char name[50];
      }t;

int flag=0;
char ch,another;
clrscr();

fm=fopen("MASTERFILE.DAT","rb+");

if(fm==NULL) {

printf("Masterfile doesn't exist!");

}

ft=fopen("TRANSACTION.DAT","rb+");

if(ft==NULL) {

ft=fopen("TRANSACTION.DAT","wb+");

if(ft==NULL)
puts("cannot open transactions file!");
exit();
}

fu=fopen("UPDATELIST.TXT","w+");

if(fu==NULL) {

puts("cannot open target file!");
exit();
}

while(1) {

clrscr();

gotoxy(30,2);
printf("Transaction-File\n");
gotoxy(30,3);
printf("****************\n\n\n");
gotoxy(20,6);
printf("1: ADD/DELETE student data from master list: ");
gotoxy(20,8);
printf("2: Read transaction data: ");
gotoxy(20,10);
printf("3: Creat updated list: ");
gotoxy(20,12);
printf("0: Exit:");

gotoxy(2,24);
printf("Your choice: ");
fflush(stdin);

ch=getche();

switch(ch) {

case '1':

clrscr();

fseek(ft,0,SEEK_END);

another='y';

while(another=='y' || another=='Y') {

clrscr();

gotoxy(2,23);
printf("NOTE: data to be deleted should match master list");
gotoxy(2,24);
printf("NOTE: data to be added should follow the ascending nature of master list");
gotoxy(20,5);
printf("ADD/DELETE student(A/D): ");
scanf("%c",&t.stats);
gotoxy(20,7);
printf("Enter roll number: ");
scanf("%d",&t.rl);
gotoxy(20,9);
printf("Enter name: ");
fflush(stdin);
gets(t.name);

fwrite(&t,sizeof(t),1,ft);

gotoxy(20,12);
printf("Add more data(Y/N): ");
fflush(stdin);

another=getche();

}

break;

case '2':

clrscr();

gotoxy(30,2);
printf("Student data");
gotoxy(30,3);
printf("************\n\n");

rewind(ft);

while(fread(&t,sizeof(t),1,ft)==1) {

printf("\n");

if(t.stats=='a' || t.stats=='A') {
printf("ADD");
}

else {
printf("DELETE");
}
printf("\t%d\t%s\n",t.rl,t.name);

}

printf("\n\npress any key to return...");
getch();

break;

case '3':

clrscr();

gotoxy(30,2);
printf("make updated list");
gotoxy(30,3);
printf("*****************\n\n");


rewind(fm);

while(fread(&s,sizeof(s),1,fm)==1) {

flag=0;

rewind(ft);

while(fread(&t,sizeof(t),1,ft)==1) {

if(t.rl==s.rl ) {

if(t.stats=='d' || t.stats=='D') {
flag=1;
}

}

}

if(flag==0)

fprintf(fu,"\n%d\t%-s\n",s.rl,s.name);


}


rewind(ft);

while(fread(&t,sizeof(t),1,ft)==1) {

if(t.stats=='a' || t.stats=='A') {

fprintf(fu,"\n%d\t%-s\n",t.rl,t.name);

}

}

ftemp=fopen("TEMP.DAT","wb+");

fclose(ftemp);
fclose(ft);

remove("TRANSACTION.DAT");
rename("TEMP.DAT","TRANSACTION.DAT");

ft=fopen("TRANSACTION.DAT","rb+");

gotoxy(2,24);
printf("press any key to continue...");
getch();

break;
case '0':

fclose(fm);
fclose(ft);
fclose(fu);
exit();

}
}


}
