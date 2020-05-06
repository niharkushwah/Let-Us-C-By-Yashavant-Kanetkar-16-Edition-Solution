/* This program will make a file of blood donors and save information in it */

         /* Writing program */

#include<stdio.h>
#include<conio.h>
void main() {

FILE *fp;
char another='y';

struct blood {
    char name[50];
    char adr[50];
    int age;
    int bld;
    } b;

clrscr();

fp=fopen("BLOODBANK.DAT","wb");

if(fp==NULL) {
printf("cannot open target file!\n");
exit();
}

while(another=='Y' || another=='y') {

clrscr();
printf("\t\tInformation of Blood donor\n");
printf("\t\t**************************\n\n\n");
printf("Enter the name: ");
scanf("%s",b.name);
printf("\n\nenter the address: ");
scanf("%s",b.adr);
printf("\n\nenter the age: ");
scanf("%d",&b.age);
printf("\n\nenter the blood group(1/2/3/4): ");
scanf("%d",&b.bld);

fprintf(fp,"%s\t%s\t%d\t%d",b.name,b.adr,b.age,b.bld);

printf("\n\n\nenter more information(Y/N): ");
fflush(stdin);

another=getch();

}

fclose(fp);

}



Program to read record file for specifications




/* This program will read the information from the file made by writing program */

           /* Reading Program */

#include<stdio.h>
#include<conio.h>
void main() {

FILE *fp;
char ch;

struct blood {
        char name[50];
        char adr[50];
        int age;
        int bld;
        }b;
clrscr();

fp=fopen("BLOODBANK.DAT","rb");

if(fp==NULL) {
printf("cannot open source file!\n\n");
exit();
}

while(fscanf(fp,"%s\t%s\t%d\t%d",&b.name,&b.adr,&b.age,&b.bld)!=EOF)
if(b.age<25 && b.bld==2) {
printf("\n%s\t %s\t%2d\t %d",b.name,b.adr,b.age,b.bld);
}
fclose(fp);

getch();
}

