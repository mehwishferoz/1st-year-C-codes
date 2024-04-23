#include<stdio.h>
void swap(int,int);
int main()
{
    int x, y;
    printf("Enter the values of x and y: \n");
    scanf("%d%d", &x,&y);
    swap(x,y);
    printf("X = %d\t Y = %d\n", x,y);
    return 0;
}
void swap(int m, int n)
{
    int t;
    t=m;
    m=n;
    n=t;
    printf("X = %d\t Y = %d\n", m,n);
}
