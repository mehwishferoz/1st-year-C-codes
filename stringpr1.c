#include<stdio.h>
#include<string.h>
char cap(char str[100])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(i==0)
        {
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
            continue;
        }
        if(str[i]==' ')
        {
            i++;
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
                continue;
            }
        }
        else
        {
            if(str[i]>='A' && str[i]<='Z')
                str[i]=str[i]+32;
        }
    }
    return str[i];
}

void frequency(char str[100], char x)
{
    int count=0;
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]==x)
            count++;
    }
    if(count==0)
        printf("Character not found!\n");
    else
        printf("The frequency of %c in %s is %d\n", x, str, count);
}

void stringlength(char str[100])
{
    int i, count=0;
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("The length of the string is %d\n", count);
}
 void copy(char str[100], char str2[100])
 {
     int i;
     printf("Before copying: \n");
     puts(str);
     puts(str2);
     printf("After copying: \n");
     puts(str);
     for(i=0;str[i]!='\0';i++)
     {
         str2[i]=str[i];
     }
     puts(str2);
 }

int main()
{
    char str[100], str2[100], c, x;
    int s;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter string to be copied: \n");
    gets(str2);
    copy(str,str2);
    s=strlen(str);
    printf("Length using strlen is %d\n", s);
    stringlength(str);
    c=cap(str);
    puts(str);
    printf("Enter a character to check its frequency in the string: \n");
    scanf("%c", &x);
    frequency(str,x);

    return 0;
}
