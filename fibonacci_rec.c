#include<stdio.h>
 int fib(int n)
{
    if(n==0)
      return 0;
    else if (n==1)
        return 1;
    else
        return(fib(n-1)+fib(n-2));
}
void main()
{
    int n,i=0,c;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci series\n");

   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", fib(i));
      i++;
   }
}
