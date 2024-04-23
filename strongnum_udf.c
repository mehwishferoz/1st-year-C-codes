#include<stdio.h>
int strong(int n);
void main()
{
    int n,s;
    printf("Enter the number to check if it is strong number or not: ");
    scanf("%d",&n);
    s=strong(n);
    if(s == n)
        printf("\n%d is strong number\n",n);
    else
        printf("\n%d is not strong",n);
}
int strong(int n)
{
    int fact,i,last_dig,sum=0;
    while(n>0)
    {
        last_dig=n%10;
        fact=1;
        for(i=1; i<=last_dig; i++)
        {
            fact=fact*i;
        }
         sum=sum+fact;
          n=n/10;
    }
    printf("%d\n",sum);
return sum;
}
