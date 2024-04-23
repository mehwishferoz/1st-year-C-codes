#include<stdio.h>
#include<string.h>
#define MAX 1000

void read(char string[]);
void display(char string[]);
void main()
{
    char string[MAX];
    int i;
    read(string);

    for(i=0;i!='\0';i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
        {
            string[i]=string[i+1];
            continue;
        }

        if(string[i]==' ')
        {
          i++;
          if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
        {
            string[i]=string[i+1];
        }
        }
    }
    printf("Statement without vowels in it is: \n");
    display(string);
}

void read(char string[])
{
    printf("Enter statement: \n");
    gets(string);
}
void display(char string[])
{
    int z;
    puts(string);
}
