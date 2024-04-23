#include<stdio.h>
void copy(char s1[20], char s2[20])
{
    int i;
    for(i=0; s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
}
void main()
{
    char s1[20], s2[20];
    printf("Enter string1 and string2\n");
    gets(s1);
    gets(s2);
    printf("Before copy\n");
    puts(s1);
    puts(s2);
    printf("\n");
    copy(s1,s2);
    printf("After copy\n");
    puts(s1);
    puts(s2);
}
