/*
    Modular Program to copy one file to another
*/


#include<stdio.h>
#include<stdlib.h>

void file_copy(FILE *, FILE *);

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("meh.txt","r");
    fp2 = fopen("abcd.txt","w");
    if(fp1==NULL || fp2==NULL)
    {
        perror("");//same as printf, but perror will print compiler error message as well
        exit(0);
    }
    file_copy(fp1, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

void file_copy(FILE *fp1, FILE *fp2)
{
    char ch;
    while((ch=getc(fp1))!=EOF)
        putc(ch, fp2);
}

