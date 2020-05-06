#include<stdio.h>
main()
{
    FILE *fs;
    char ch;
    int i=1;
    fs=fopen("Hello.c","r");
    if(fs==NULL)
    {
        printf("can't open source file");
        exit(1);
    }
    printf("%d",i++);
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
        if(ch=='\n')
        {
            printf("%d",i);
            i++;
        }
    }
    fclose(fs);
}

O
