//c program to find the largest value among the following
#include<stdio.h>
void main ()
{
    int a, b, c;
    printf("Enter the values\n");
      scanf("%d%d%d", &a,&b,&c);
    if (a>b&&a>c)
        printf("%d is the largest value", a);

    else if (b>a&&b>c)
        printf("%d is the largest value", b);

    else if (c>a&&c>b)
        printf("%d is the largest value", c);

    else
        printf("error");

    }
