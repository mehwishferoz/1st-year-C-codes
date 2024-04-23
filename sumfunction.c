#include<stdio.h>
int sum(int a, int b);
void main()
{
    int a, b, d, x, y, e, r, s, p, f, g, h;
    printf("Enter the values of A and B: \n");
    scanf("%d\n%d", &a, &b);
    d=sum(a,b); //fun call 1
    printf("The sum of %d and %d is %d\n", a, b, d);

    printf("Enter the values of X and Y: \n");
    scanf("%d\n%d", &x, &y);
    e=sum(x,y); //fun call 2
    printf("The sum of %d and %d is %d\n", x, y, e);

    printf("Enter the values of R and S: \n");
    scanf("%d\n%d", &r, &s);
    p=sum(r,s); //fun call 2
    printf("The sum of %d and %d is %d\n", r, s, p);

    printf("Enter the values of F and G: \n");
    scanf("%d\n%d", &f, &g);
    h=sum(f,g); //fun call 3
    printf("The sum of %d and %d is %d\n", f, g, h);
}
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
