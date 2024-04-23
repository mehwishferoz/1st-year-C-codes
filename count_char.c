/*
    Modular Program to count number of characters in a file
*/


#include<stdio.h>
#include<stdlib.h>
long long int count(FILE *);
int main()
{
    long long int c;
    FILE *fp1;
    fp1 = fopen("meh.txt","r");
    if(fp1==NULL)
    {
        perror("");
        exit(0);
    }
    c = count(fp1);
    printf("%lld\n",c);
    fclose(fp1);
    return 0;
}

long long int count(FILE *fp)
{
    long long int c = 0;
    char ch;
    while((ch=getc(fp))!=EOF)
        c++;
    return c;
}
