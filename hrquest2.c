#include <stdio.h>
int main()
{
    int n, x, i, digit, sum=0;
    scanf("%d", &n);

    while(n>10000)
    {
        digit=n%10;
        x=1;

        for(i=1; i<=digit; i++)
        {
            x=x*i;
        }

         sum=sum+x;
          n=n/10;
    }
    printf("%d", sum);

    return 0;
}
