#include<stdio.h>
#include<stdlib.h>

void rev(char s[2000], int len);
int length(char s[2000]);

int main()
{
    int len;
    char s[2000];
    fgets(s, sizeof s, stdin);
    len=length(s);
    rev(s,len);
    return 0;
}

int length(char s[2000])
{
    int count=0, i;
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}

void rev(char s[2000], int len)
{
    int i;
    char temp;
    for(i=0;i<len/2;i++)
    {
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
    fputs(s, stdout);
}
