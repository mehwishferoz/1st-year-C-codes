#include<stdio.h>
void main()
{
    int i=1, j=1, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(j<=n)
    {
        printf("%d\n", i);
        i=i+2;
        j++;
    }
}
