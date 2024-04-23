#include <stdio.h>
int even(int n);
int odd(int n);

int main()
{
      int n, e, o, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        int arr[n];
        scanf("%d", &arr[n]);
    }
    if (n<0)
    printf("Invalid input\n");
    else
    {
    e=even(n);
    printf("Sum of even numbers=%d\n", e);
    o=odd(n);
    printf("Sum of odd numbers=%d\n", o);
    }
    return 0;
}

int even(int n)
{
    int sum=0,i,arr[n];
    for(i=1;i<=arr[n];i++)

    {
        if (i%2==0)
    {
        sum+=i;
    }
    }
    return sum;
}
int odd(int n)
{
    int sum1=0,j;
    for(j=2;j<=n;j++)
    {
    if(j%2!=0)
    {
        sum1+=j;
    }
    }
    return sum1;
}
