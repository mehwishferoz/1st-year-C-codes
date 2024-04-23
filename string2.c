-//passing string to function
#include<stdio.h>
#include<string.h>
void read(char name[]);
void display(char name[]);
int stringlength(char name[]);
void stringcopy(char name[],char name1[]);
void stringcon(char name1[]);
void main()
{
    char name[50],name1[50];
    int length;
    read(name);
    display(name);
    length=stringlength(name);
    printf("%d\n",length);
    printf("It's time to learn the string copy function\n");
    printf("Source string is:\n");
    puts(name);
    stringcopy(name,name1);
    printf("It's time to learn the string compare function\n");
    stringcmp(name1);
    printf("It's time to learn the string concatenation function\n");
    stringcon(name1);
}
void read(char name[])
{
    printf("Enter name:");
    gets(name);
}
void display(char name[])
{
    int z;
    puts(name);
}
int stringlength(char name[])
{
    int z;
    z=strlen(name);
    return z;
}
void stringcopy(char name[],char name1[])
{
    strcpy(name1,name);
    printf("Destination string is\n");
    display(name1);
}
void stringcmp(char name1[])
{
    char name2[50];
    int res;
    printf("enter another string to compare with first string\n");
    gets(name2);
    res=strcmp(name1,name2);
    printf("%d",res);
}
void stringcon(char name1[])
{
    char name4[60];
    printf("Enter new string to be added\n");
    gets(name4);
    strcat(name1,name4);
    puts(name1);
}
