#include<stdio.h>
void main()
{
    int i, n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i=1;
    sum=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum = sum + i;
        }
        i++;
    }
    printf("Sum of first %d even Numbers: %d\n",n,sum);
}
