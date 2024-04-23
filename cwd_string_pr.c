#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    char str[]=" is friend of ";
    printf("Enter two names: \n");
    gets(str1);
    gets(str2);
    strcat(str1,str);
    puts(strcat(str1,str2));
    return 0;
}
