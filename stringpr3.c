#include<stdio.h>
#include<stdlib.h>
void duplicate(char str[100])
{
    int i, j;
    char str1[100];
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;str[j]!=' ';j++)
        {

        }
    }
    puts(str);
}

int main()
{
    char str[100];
    printf("Enter a string: \n");
    gets(str);
    //Input: Lets learn learn strings in C strings Lets
    //Output: Lets learn strings in C
    printf("String with duplicate words: \n");
    puts(str);
    printf("String without duplicate words: \n");
    duplicate(str);

    return 0;
}
