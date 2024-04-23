#include<stdio.h>
int asc(int a[], int n)
{
    for(int i=0;i<(n-1);i++)
    {
        if(a[i]>a[i+1])
            return 0;
    }
    return 1;
}
int des(int a[], int n)
{
    for(int i=0;i<(n-1);i++)
    {
        if(a[i]<a[i+1])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    do
    {
    scanf("%d", &n);
    }
    while(n>=4 && n<=100)
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    if(asc(a,n)==1 || des(a,n)==1)
        printf("1");
    else
        printf("0");
    return 0;
}
