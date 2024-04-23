#include<stdio.h>
#include<stdlib.h>

void copy(FILE *fp1, FILE *fp2)
{
    char ch;
    while((ch=getc(fp1))!=EOF)
    {
        putc(ch,fp2);
    }
}

int main()
{
    FILE *fp1, *fp2;
    fp1=fopen("abcd.txt", "r");
    fp2=fopen("meh.txt", "w");
    if(fp1==NULL || fp2==NULL)
    {
        perror("");
        exit(0);
    }
    copy(fp1,fp2);
    return 0;
}
