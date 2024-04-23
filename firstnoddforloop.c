#include<stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1, j=1; j<=n; i=i+2, j++)
        printf("%d\n", i);
}
