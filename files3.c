#include<stdio.h>
int main()
{
    int num = 100;
    float x = 786.09;
    char ch = 'm';
    FILE *fp;
    fp=fopen("abcd.txt", "a");
    fprintf(fp,"%d\t%f\t%c\n", num,x,ch);
    fclose(fp);
}
