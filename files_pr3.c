#include<stdio.h>
#include<stdlib.h>

int count_char(FILE *fp, int count)
{
    char ch;
    while(ch=getc(fp)!=EOF)
        count++;
    return count;
}

int main()
{
    int c, count;
    FILE *fp;
    fp=fopen("abcd.txt", "r");
    c=count_char(fp,count);
    printf("Number of characters = %d\n", c);
    fclose(fp);
    return 0;
}
