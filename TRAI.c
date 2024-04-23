#include<stdio.h>
int sep(int dig2)
{
    int n, last_two, mid_three, start_two;
    last_two=n%100;
    n=n/100;
    return last_two;
    mid_three=n%1000;
    return mid_three;
    n=n/1000;
    start_two=n;
    return start_two;
}
int main()
{
   int n, last_two, mid_three, start_two;
   char c;
    c='-';
   scanf("%d", &n);
   if(n>=1000000)
    printf("%d%c%d%c%d\n", start_two, c, mid_three, c, last_two);
   else
    printf("Invalid phone number\n");
   return 0;
}
