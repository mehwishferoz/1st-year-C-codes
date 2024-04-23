#include<stdio.h>
void strcpy(char s1[100], char s2[100])
{
    int i;
    for(i=0; s1[i]!='\0'; i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
}
int main()
{
    char s1[100], s2[100];
    printf("Enter the strings: \n");
    gets(s1);
    gets(s2);
    printf("Before copy: \n");
    puts(s1);
    puts(s2);
    printf("After copy: \n");
    strcpy(s1,s2);
    puts(s1);
    puts(s2);
}
