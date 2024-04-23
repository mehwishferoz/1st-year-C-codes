#include<stdio.h>
int main()
{
    char ch='W';
    FILE *fp;
    fp = fopen("abcd.txt", "w");
    putc(ch,fp);
    fclose(fp);
}
