#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, n, s;
    char str[100];
    printf("Enter the number of strings: \n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        gets(str[i]);
    }
    for(j=0;j<n;j++)
    {
        s=strlen(str[j]);
        printf("Length of %d string is %d\n", j, s);
    }
    return 0;
}
