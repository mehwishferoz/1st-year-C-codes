#include<stdio.h>
int perfect(int n);
void main()
{
    int n, p;
    printf("Enter the number to check if it is perfect or not: ");
    scanf("%d", &n);
    p=perfect(n);
    if(p==n)
        printf("%d is a perfect number\n", n);
    else
        printf("%d is a not a perfect number\n", n);
}
int perfect(int n)
{
    int i, sum=0;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        sum+=i;
    }
    return sum;
}
