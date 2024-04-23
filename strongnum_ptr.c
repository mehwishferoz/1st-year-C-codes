#include<stdio.h>
int strong(int*);
int main()
{
    int n, sum;
    int *ptr_n;
    ptr_n=&n;
    printf("Enter a number to check if it is strong number: \n");
    scanf("%d", &n);
    strong(ptr_n);
     if(sum==n)
        printf("Entered number is strong!\n");
    else
        printf("Entered number is not strong!\n");
        return 0;
}
int strong(int* m)
{
    int d,fact,sum=0;
    while(*m>0)
    {
        d=*m%10;
        fact=1;
        for(int i=d;i>0;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        *m=*m/10;
    }
    printf("Sum = %d\n", sum);
   return sum;
}
