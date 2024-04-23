#include<stdio.h>
void prime(int n);
int n, i;
void main()
{
    printf("Enter the number to check prime: ");
    scanf("%d", &n);

    prime(n);
}

void prime(int n)
{
    int flag=0;

    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
       if (flag==1)
       {
          printf("The number is not prime\n");
          break;
       }
        else
       {
            printf("The number is prime\n");
            break;
       }
    }
}
