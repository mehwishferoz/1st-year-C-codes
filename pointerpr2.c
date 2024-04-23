#include<stdio.h>
int main()
{
    int x, y, t;
    int *p, *q;
    p=&x;
    q=&y;
    printf("Enter the values of x and y: \n");
    scanf("%d%d", &x,&y);
    t=*p;
    *p=*q;
    *q=t;
    printf("x = %d\t y = %d\n", x, y);
    return 0;
}
