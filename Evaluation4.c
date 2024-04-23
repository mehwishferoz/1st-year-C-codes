#include<stdio.h>
int six(x)
{
    int i, n;
    for(i=0;i<(n/2)-1;i++)
    {
        int x=0;
        x+=6;
    }
    return x;
}
int seven(y)
{
    int i, n;
    for(i=0;i<(n/2)-1;i++)
    {
       int y=0;
       y+=7;
    }
    return y;
}
int main()
{
    int n, x1, x, y, y1, s1, s2;
    scanf("%d", &n);
    if(n%2==0)
    {
    s1=six(x);
    printf("%d", s1);
    }
    else
    {
        s2=seven(y);
        printf("%d", s2);
    }
    return 0;
}
