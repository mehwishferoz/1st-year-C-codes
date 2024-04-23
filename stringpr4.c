//C program to remove a given word from a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], word[100];
    printf("Enter a string: \n");
    gets(str);
    printf("Enter the word to be removed from the string: \n");
    gets(word);
    for(int i=0;str[i]!='\0';i++)
    {
        while(str[i]!=' ')
        {
            if(str[i]==word[i])

        }
    }
}
