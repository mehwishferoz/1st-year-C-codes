#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    FILE *fp;
    fp=fopen("abcd.txt","w");
    printf("Enter a string: \n");
    gets(s);
    fprintf(fp,"%s",s);
    fclose(fp);
    return 0;
}
