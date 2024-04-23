#include<stdio.h>
#include<string.h>

void read(char str[])
{
    printf("Enter a string: \n");
    gets(str);
}

void display(char str[])
{
    int z;
    puts(str);
}

int stringlength(char str[])
{
    int res;
    res=strlen(str);
    return res;
}
void main()
{
    char str[20][20];
    int i, n, length;
    printf("Enter the value of N: \n");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        read(str);
        display(str);
        length=strlen(str);
    }

}
