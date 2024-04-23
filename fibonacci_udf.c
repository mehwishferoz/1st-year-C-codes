#include<stdio.h>
int fib(int n);

void main()
{
    int n, f;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    f=fib(n);
}
int fib(int n)
{
    int f0=0, f1=1, f2, i;
    if(n==1)
       printf("%d\t", f0);
    else if(n==2)
       printf("%d\t %d\t", f0, f1);
    else
    {
        printf("%d\t %d\t", f0, f1);
    for (i=3; i<=n; i++)
    {
        f2=f0+f1;
        printf("%d\t", f2);
        f0=f1;
        f1=f2;
    }
    }
    return fib;
}
