//c program to calculate the numbers between m and n
#include<stdio.h>
int main ()
{

    int i,m,n;
    printf("Enter the value of m and n: \n");
    scanf("%d%d", &m, &n);
    i=m+1;
    while(i<n)
    {
       printf("%d\t", i);
       i++;
    }

    return 0;
}
