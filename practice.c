#include<stdio.h>

int sum(int *ptr1, int *ptr2);
int main()
{
    int a, b, s;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Enter 2 numbers to find their sum: ");
    scanf("%d%d", &a, &b);
    s=sum(&a,&b);
    printf("Sum = %d\n", s);
}

int sum(int *ptr1, int *ptr2)
{
    int sum=0;
    sum= *ptr1 + *ptr2;
    return sum;
}
