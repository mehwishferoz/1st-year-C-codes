#include<stdio.h>
void main()
{
    int i, n, sum;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    i=1;
    sum=0;
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum = sum + i;
        }
        i=i+2;
    }
    printf("Sum of first %d odd numbers: %d\n",n,sum);
}
