#include<stdio.h>
int main()
{
    char ch='W';
    FILE *fp;
    fp = fopen("abcd.txt", "r");
    ch = getc(fp);
    printf("Character to read = %c\n", ch);
    fprintf(fp,"%c",ch);
    fclose(fp);
}
