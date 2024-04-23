#include<stdio.h>
int main ()
{
    int i=5, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i<=(5*n))
    {
        printf("%d\n", i);
        i=i+5;
    }
    return 0;
}
