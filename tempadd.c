#include<stdio.h>
void main()
{
    long b;
    float a;
    printf("Enter a and b: ");
    scanf("%f%l", &a, &b);
    float sum = a + b;
    printf("%f", sum);
}
